#include <gtest/gtest.h>
#include <database.h>
#include <iostream>

#include <boost/filesystem.hpp>

using namespace boost::filesystem;

namespace {

  class DatabaseTest : public ::testing::Test {
   protected:
    // You can remove any or all of the following functions if its body
    // is empty.
  
    DatabaseTest() {

    }
  
    virtual ~DatabaseTest() {
    }
  
    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:
  
    virtual void SetUp() {
      std::string location = "/tmp/test-database";
      path p(location.c_str());
      std::ifstream *destiny = new std::ifstream(location);
      if (*destiny)
      {
        remove_all(p);
      }
    }
  
    virtual void TearDown() {
      // Code here will be called immediately after each test (right
      // before the destructor).
    }
  
    // Objects declared here can be used by all tests in the test case for Foo.
  };
  
  TEST_F(DatabaseTest, Create) {

    Database *database = new Database("/tmp/test-database", "pass");
    ASSERT_TRUE(database->create());
  }

}


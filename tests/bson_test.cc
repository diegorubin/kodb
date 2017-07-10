#include <gtest/gtest.h>
#include <bson_class.h>

TEST(Bson, GetValues) {
  Bson bson;
  bson.set_string("key", "teste");
  EXPECT_EQ("teste", bson.get_string("key"));
}


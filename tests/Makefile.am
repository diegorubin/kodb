AUTOMAKE_OPTIONS = subdir-objects 

TESTS = tests
check_PROGRAMS = tests
tests_SOURCES = main.cc \
	bson_test.cc \
	database_test.cc

ACLOCAL_AMFLAGS = ${ACLOCAL_FLAGS}

AM_CPPFLAGS = ${KoDB_CFLAGS}

AM_LDFLAGS = ${KoDB_LDFLAGS} -pthread

tests_CPPFLAGS = \
	-I/usr/include \
	-I$(includedir) \
	-I$(top_builddir)/lib \
	$(AM_CPPFLAGS)

tests_LDADD = $(top_builddir)/lib/kodb_so-bson_class.o \
	$(top_builddir)/lib/kodb_so-document.o \
	$(top_builddir)/lib/kodb_so-database.o \
	${KoDB_LIBS} \
	/usr/local/lib/libgtest.a


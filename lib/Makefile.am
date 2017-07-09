AUTOMAKE_OPTIONS = subdir-objects 

ACLOCAL_AMFLAGS = ${ACLOCAL_FLAGS}

AM_CPPFLAGS = ${KoDB_CFLAGS} -std=c++11

AM_LDFLAGS = ${KoDB_LDFLAGS} -shared

bin_PROGRAMS = kodb.so

kodb_so_CPPFLAGS = \
	-fPIC \
	-I$(includedir) \
	$(AM_CPPFLAGS)

kodb_so_SOURCES = kodb.cc

kodb_so_LDADD = ${KoDB_LIBS}


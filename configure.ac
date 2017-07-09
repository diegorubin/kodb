AC_INIT([KoDB],[0.0.1],[rubin.diego@gmail.com])

AM_INIT_AUTOMAKE(kodb,0.0.1)

AC_PROG_CC
AC_PROG_CXX

AC_PROG_INSTALL

AC_CONFIG_SRCDIR([lib])
AC_CONFIG_MACRO_DIR([m4])

PKG_CHECK_MODULES([KoDB],[libbson-1.0])

AC_CONFIG_FILES([
lib/Makefile
tests/Makefile
])

AC_OUTPUT(Makefile)

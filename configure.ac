
AC_INIT(octetos-G++, 0.1.0-alpha, azael.devel@gmail.com)

AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE([1.11])

AM_SILENT_RULES([yes])

AC_PROG_CXX



LT_INIT

PKG_CHECK_MODULES(OCTETOS,[octetos-core])

PKG_CHECK_MODULES(GL,[glew] [glfw3] [glm] )

AM_CONDITIONAL(WITH_TESTS, test x"$with_tests" = "xyes")
AC_ARG_WITH([tests], AS_HELP_STRING([--with-tests], [Compilando con soporte para Tests]))
if test "x$with_tests" = "xyes"; then 
	PKG_CHECK_MODULES(CUNIT,cunit)
fi

AM_CONDITIONAL(WITH_BOOKS, test x"$with_books" = "xyes")
AC_ARG_WITH([books], AS_HELP_STRING([--with-books], [Compilando con libros de ejemplo]))



AC_OUTPUT([
Makefile
src/Makefile
B01/Makefile
B02/Makefile
tests/Makefile
])

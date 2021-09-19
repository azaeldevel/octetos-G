
AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\"

AM_CFLAGS =\
	 -Wall\
	 -g

noinst_PROGRAMS = develop

develop_SOURCES = develop.cc
develop_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS)
develop_LDADD = $(OCTETOS_LIBS) $(GL_LIBS)



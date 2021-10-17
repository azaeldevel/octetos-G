
AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\"

AM_CFLAGS =\
	 -Wall\
	 -g

noinst_PROGRAMS = 01 

01_SOURCES = 01.cc
01_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS) -I$(top_srcdir)/src  -DOCTETOS_G_LOW
01_LDADD = $(OCTETOS_LIBS) $(GL_LIBS) $(top_builddir)/src/liboctetos-G++.la

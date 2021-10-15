
AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\"

AM_CFLAGS =\
	 -Wall\
	 -g


lib_LTLIBRARIES = liboctetos-G++.la


develop_SOURCES = develop.cc window.cc shader.cc
develop_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS)
develop_LDADD = $(OCTETOS_LIBS) $(GL_LIBS)


liboctetos_G___la_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS)  -DOCTETOS_G_LOW
liboctetos_G___la_LIBADD = $(OCTETOS_LIBS) $(GL_LIBS)
liboctetos_G___la_SOURCES = window.cc Shader.cc Color.cc
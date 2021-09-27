
AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\"

AM_CFLAGS =\
	 -Wall\
	 -g

noinst_PROGRAMS = develop TA-02 

lib_LTLIBRARIES = liboctetos-ogl.la



develop_SOURCES = develop.cc window.cc shader.cc
develop_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS)
develop_LDADD = $(OCTETOS_LIBS) $(GL_LIBS)

TA_02_SOURCES = TA-02.cc shader.cc
TA_02_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS)
TA_02_LDADD = $(OCTETOS_LIBS) $(GL_LIBS)

TA_03_SOURCES = TA-03.cc shader.cc
TA_03_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS)
TA_03_LDADD = $(OCTETOS_LIBS) $(GL_LIBS)

TA_04_SOURCES = TA-04.cc shader.cc
TA_04_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS)
TA_04_LDADD = $(OCTETOS_LIBS) $(GL_LIBS)

liboctetos_ogl_la_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS)  
liboctetos_ogl_la_LIBADD = $(OCTETOS_LIBS) $(GL_LIBS)
liboctetos_ogl_la_SOURCES = window.cc shader.cc
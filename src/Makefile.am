
AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\"

AM_CFLAGS =\
	 -Wall\
	 -g

noinst_PROGRAMS = develop TA-02 TA-02-squared TA-04 TA-05 TA-06 TB-01

lib_LTLIBRARIES = liboctetos-ogl.la



develop_SOURCES = develop.cc window.cc shader.cc
develop_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS)
develop_LDADD = $(OCTETOS_LIBS) $(GL_LIBS)

TA_02_SOURCES = TA-02.cc shader.cc
TA_02_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS)
TA_02_LDADD = $(OCTETOS_LIBS) $(GL_LIBS)

TA_02_squared_SOURCES = TA-02-squared.cc shader.cc
TA_02_squared_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS)
TA_02_squared_LDADD = $(OCTETOS_LIBS) $(GL_LIBS)

TA_03_SOURCES = TA-03.cc shader.cc
TA_03_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS)
TA_03_LDADD = $(OCTETOS_LIBS) $(GL_LIBS)

TA_04_SOURCES = TA-04.cc shader.cc
TA_04_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS)
TA_04_LDADD = $(OCTETOS_LIBS) $(GL_LIBS)

TA_05_SOURCES = TA-05.cc shader.cc texture.cc
TA_05_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS)
TA_05_LDADD = $(OCTETOS_LIBS) $(GL_LIBS)

TA_06_SOURCES = TA-06.cc shader.cc texture.cc controls.cc
TA_06_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS)
TA_06_LDADD = $(OCTETOS_LIBS) $(GL_LIBS)


TB_01_SOURCES = TB-01.cc
TB_01_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS)
TB_01_LDADD = $(OCTETOS_LIBS) $(GL_LIBS)


liboctetos_ogl_la_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS)  
liboctetos_ogl_la_LIBADD = $(OCTETOS_LIBS) $(GL_LIBS)
liboctetos_ogl_la_SOURCES = window.cc shader.cc
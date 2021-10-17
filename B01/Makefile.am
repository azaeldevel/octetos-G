 # http://www.opengl-tutorial.org/es/beginners-tutorials/

AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\"

AM_CFLAGS =\
	 -Wall\
	 -g

noinst_PROGRAMS = 02 02-squared 03 04 05 06


02_SOURCES = 02.cc shader.cc 
02_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS) -I$(top_srcdir)/src  -DOCTETOS_G_LOW
02_LDADD = $(OCTETOS_LIBS) $(GL_LIBS) $(top_builddir)/src/liboctetos-G++.la

02_squared_SOURCES = 02-squared.cc shader.cc
02_squared_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS) -I$(top_srcdir)/src  -DOCTETOS_G_LOW
02_squared_LDADD = $(OCTETOS_LIBS) $(GL_LIBS) $(top_builddir)/src/liboctetos-G++.la

03_SOURCES = 03.cc shader.cc
03_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS) -I$(top_srcdir)/src  -DOCTETOS_G_LOW
03_LDADD = $(OCTETOS_LIBS) $(GL_LIBS) $(top_builddir)/src/liboctetos-G++.la

04_SOURCES = 04.cc shader.cc
04_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS) -I$(top_srcdir)/src  -DOCTETOS_G_LOW
04_LDADD = $(OCTETOS_LIBS) $(GL_LIBS) $(top_builddir)/src/liboctetos-G++.la

05_SOURCES = 05.cc shader.cc texture.cc
05_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS) -I$(top_srcdir)/src  -DOCTETOS_G_LOW
05_LDADD = $(OCTETOS_LIBS) $(GL_LIBS) $(top_builddir)/src/liboctetos-G++.la

06_SOURCES = 06.cc shader.cc texture.cc controls.cc
06_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS) -I$(top_srcdir)/src  -DOCTETOS_G_LOW
06_LDADD = $(OCTETOS_LIBS) $(GL_LIBS) $(top_builddir)/src/liboctetos-G++.la

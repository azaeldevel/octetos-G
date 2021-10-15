
AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\"

AM_CFLAGS =\
	 -Wall\
	 -g

noinst_PROGRAMS = 02 02-squared


02_SOURCES = 02.cc shader.cc 
02_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS) -I$(top_srcdir)/src  -DOCTETOS_G_LOW
02_LDADD = $(OCTETOS_LIBS) $(GL_LIBS) $(top_builddir)/src/liboctetos-G++.la

02_squared_SOURCES = 02-squared.cc shader.cc
02_squared_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS) -I$(top_srcdir)/src  -DOCTETOS_G_LOW
02_squared_LDADD = $(OCTETOS_LIBS) $(GL_LIBS) $(top_builddir)/src/liboctetos-G++.la

TA_03_SOURCES = TA-03.cc shader.cc
TA_03_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS) -I$(top_srcdir)/src  -DOCTETOS_G_LOW
TA_03_LDADD = $(OCTETOS_LIBS) $(GL_LIBS) $(top_builddir)/src/liboctetos-G++.la

TA_04_SOURCES = TA-04.cc shader.cc
TA_04_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS) -I$(top_srcdir)/src  -DOCTETOS_G_LOW
TA_04_LDADD = $(OCTETOS_LIBS) $(GL_LIBS) $(top_builddir)/src/liboctetos-G++.la

TA_05_SOURCES = TA-05.cc shader.cc texture.cc
TA_05_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS) -I$(top_srcdir)/src  -DOCTETOS_G_LOW
TA_05_LDADD = $(OCTETOS_LIBS) $(GL_LIBS) $(top_builddir)/src/liboctetos-G++.la

TA_06_SOURCES = TA-06.cc shader.cc texture.cc controls.cc
TA_06_CXXFLAGS = $(OCTETOS_CFLAGS) $(GL_CFLAGS) -I$(top_srcdir)/src  -DOCTETOS_G_LOW
TA_06_LDADD = $(OCTETOS_LIBS) $(GL_LIBS) $(top_builddir)/src/liboctetos-G++.la


# LT_INIT requires that you define the Makefile 
# variable top_builddir in your Makefile.in.
# Obviously, any subdir's Makefile.am will have ".."
#top_builddir = ./

AUTOMAKE_OPTIONS = foreign

bin_PROGRAMS = method4

noinst_LTLIBRARIES = libmethod4.la
lib_LTLIBRARIES = libmine.la

#libmine_ladir = ./.libs
libmine_la_SOURCES = libmine.c


# libmethod4_la_CFLAGS = \
# 	-fno-builtin-malloc \
# 	-ffreestanding \
# 	-fstrict-volatile-bitfields \
# 	-static
#  --whole-archive parameter to force the linker to 
#  include the library, but it should be able to 
#  infer its own needs from unmatched symbols.
# libmethod4_la_LDFLAGS = --whole-archive
# libmethod4_la_CPPFLAGS = -I.
libmethod4_la_SOURCES = method4.c
libmethod4_la_LIBADD = libmine.la


#method4dir = .
method4_SOURCES = main4.c
#method4_LIBRARIES = libmethod4.a
method4_LDADD = libmethod4.la
# main executable ends up in TODO subdirectory.
# libmethod4.a archive library ends up in ./.libs subdirectory
# libmethod4.a does not get installed but 'make install' can.
# libmethod4.a does not get packaged but 'make dist' can.


# Makefile for method3d

# LT_INIT requires that you define the Makefile 
# variable top_builddir in your Makefile.in.
# Obviously, any subdir's Makefile.am will have ".."
#top_builddir = ./

AUTOMAKE_OPTIONS = foreign

lib_LTLIBRARIES = libmethod3d.la

# libmethod3d_la_LIBADD = 
# libmethod3d_la_CFLAGS = \
# 	-fno-builtin-malloc \
# 	-ffreestanding \
# 	-fstrict-volatile-bitfields \
# 	-static
#  --whole-archive parameter to force the linker to 
#  include the library, but it should be able to 
#  infer its own needs from unmatched symbols.
# libmethod3d_la_LDFLAGS = --whole-archive
# libmethod3d_la_CPPFLAGS = -I.
libmethod3d_la_SOURCES = method3.c

bin_PROGRAMS = method3d
#methoddsdir = .
method3d_SOURCES = main2d.c
#method3d_LIBRARIES = libmethod3d.a
method3d_LDADD = libmethod3d.la

# main executable ends up in TODO subdirectory.
# libmethod3d.so shared object library ends up in ./.libs subdirectory
# libmethod3d.a archive library ends up in ./.libs subdirectory
# libmethod3d.so does not get installed but 'make install' can.
# libmethod3d.a does not get installed period.
# libmethod3d.so does not get packaged but 'make dist' can.
#
install-data-hook:
	ldconfig $(prefix)/lib

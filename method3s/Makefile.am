
# LT_INIT requires that you define the Makefile 
# variable top_builddir in your Makefile.in.
# Obviously, any subdir's Makefile.am will have ".."
#top_builddir = ./

AUTOMAKE_OPTIONS = foreign

noinst_LTLIBRARIES = libmethod3s.la

# libmethod3s_la_LIBADD = 
# libmethod3s_la_CFLAGS = \
# 	-fno-builtin-malloc \
# 	-ffreestanding \
# 	-fstrict-volatile-bitfields \
# 	-static
#  --whole-archive parameter to force the linker to 
#  include the library, but it should be able to 
#  infer its own needs from unmatched symbols.
# libmethod3s_la_LDFLAGS = --whole-archive
# libmethod3s_la_CPPFLAGS = -I.
libmethod3s_la_SOURCES = method3.c

bin_PROGRAMS = method3s
#method3sdir = .
method3s_SOURCES = main3s.c
#method3s_LIBRARIES = libmethod3s.a
method3s_LDADD = libmethod3s.la
# main executable ends up in TODO subdirectory.
# libmethod3s.a archive library ends up in ./.libs subdirectory
# libmethod3s.a does not get installed but 'make install' can.
# libmethod3s.a does not get packaged but 'make dist' can.

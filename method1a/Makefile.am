
LTFLAGS = "--debug"

AUTOMAKE_OPTIONS = foreign subdir-objects 1.6

bindir=./my_bindir
destdir = ./my_destdir


LIBTOOL=libtool -v

# noinst_LTLIBRARIES = libhoard_la libhoard_static_la
lib_dir = my_library_subdir
noinst_LTLIBRARIES = libmethod1a.la
libmethod1adir = my_library_subdir


# libmethod1a_la_LIBADD = 
# libmethod1a_la_CFLAGS = \
# 	-fno-builtin-malloc \
# 	-ffreestanding \
# 	-fstrict-volatile-bitfields \
# 	-static
#  --whole-archive parameter to force the linker to 
#  include the library, but it should be able to 
#  infer its own needs from unmatched symbols.
# libmethod1a_la_LDFLAGS = --whole-archive
# libmethod1a_la_CPPFLAGS = -I.
libmethod1a_la_SOURCES = method1a.c

# libmethod1a.a archive library ends up in ./.libs subdirectory
# libmethod1a.a does not get installed
# libmethod1a.a does not get packaged

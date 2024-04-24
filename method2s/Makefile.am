
LTFLAGS = "--debug"

AUTOMAKE_OPTIONS = foreign

LIBTOOL=libtool -v

# noinst_LTLIBRARIES = libhoard_la libhoard_static_la
noinst_LTLIBRARIES = libmethod2s.la


# libmethod2s_la_LIBADD = 
# libmethod2s_la_CFLAGS = \
# 	-fno-builtin-malloc \
# 	-ffreestanding \
# 	-fstrict-volatile-bitfields \
# 	-static
#  --whole-archive parameter to force the linker to 
#  include the library, but it should be able to 
#  infer its own needs from unmatched symbols.
# libmethod2s_la_LDFLAGS = --whole-archive
# libmethod2s_la_CPPFLAGS = -I.
libmethod2s_la_SOURCES = method2.c

# libmethod2s.a archive library ends up in ./.libs subdirectory
# libmethod2s.a does not get installed
# libmethod2s.a does not get packaged

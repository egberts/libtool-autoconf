
Simplier script version of 'autogen.sh' is:

    aclocal [-I m4]
    libtoolize --automake -c -f
    aclocal [-I m4]
    autoconf -f
    autoheader
    automake -a -c -f


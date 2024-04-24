
Method 2d (Dynamic)
===================

Build a standalone dynamic library.

* Dynamic library is also known as a library of shared objects.
  * Shared object library are more frequently called dynamic library.
  * PIC-compiled of all object files into a shared object (.so) library.
* Dynamic library does NOT get packaged but 'make dist' can.

INTRO
-----
Shared object files all go into a dynamic (.so) library.

To install this dynamic library, run `make install`.

LOCATION
--------
The dynamic library is ONLY be found in `./.libs` subdirectory.

Location of dynamic library is defined by `$libdir` environment variable which in turn is defaulted to `$objdir` whose default is `./.libs`.

USING ARCHIVE
-------------
To incorporate the entire archive library into an executable
ONLY during this directory build, add following line to the 
Makefile.am file and re-perform 'autogen.sh', then 'make'

  programname\_LDFLAGS="-L. -lmodule1d"


References:
-----------

* See README.autogen.sh for details on 'autogen.sh'




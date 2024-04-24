How to work with static and dynamic libraries using libtool/autoconf only.

Both static and dynamic libraries can be built by libtool and are always stored in the ~/.libs subdirectory.

Method Suborganization
======================
The following methods show how to building different types of libraries using libtool.

1. Basic library locations

2. how to build the standalone library.

3. how executable uses those libraries.

4. how a library can include another library.

5. how to build a dynamic-LINK library for use
with dynamic loader (dlopen) API.

Method name ending with 's' (ie. MethodXs) are static/archive library approaches.

Method name ending with 'd' (ie. MethodXd) are dynamic library approaches.


Method 1
========
How to place various output files into different locations.

1. Library and object files into default library directory (`./.libs`)

2. Object files into same source directory

3. Library into same source directory


Method 1.1
==========

Library and object files into default library directory (`./.libs`)

Method 1.2
==========

Object files into same source directory

Method 1.3
==========

Library into same source directory


Method 2
========

Method 2 is how to build the shared-object/archive library using libtool.

Method 2s
---------

* Library filetype ends with '.a'.
* Static-linked of all object files into an archive library.
* Archive library does get installed but 'make install' can.
* Archive library does NOT get packaged but 'make dist' can.

Method 2d
---------

Build a standalone dynamic library.

* Library filetype ends with '.so'.
* Dynamic library is also known as a library of shared objects.
  * Shared object library are more frequently called dynamic library.
  * PIC-compiled of all object files into a shared object (.so) library.
* Dynamic library does get installed but 'make install' can.
* Dynamic library does NOT get packaged but 'make dist' can.

Method 3
========

Method 3 is making a library be used immediately by an executable file using libtool.

Method 3s
---------

Create an executable that includes a static library.

Method 3d
---------

Create an executable that includes a shared-object/dynamic library.


Method 4
========

Method 4 is making a library referenced by another library then used by an executable file using libtool.

Method 5
========

Method 5 is making a library be used but later dynamically loaded by an executable file using libtool.


References:

* http://gnu.ist.utl.pt/software/automake/manual/html\_node/Libtool-Convenience-Libraries.html

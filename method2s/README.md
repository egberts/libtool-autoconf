Method 2s (static)
==================

Static object of all object files into an archive library.

NOTE: One drawback of static libraries is, for any 
      change (up-gradation) of the static libraries itself, 
      you have to recompile the main program 
      every time.


* Archive library filetype ends with '.a'.

* Using libtool, the archive library get built and stored in 
the ./.libs subdirectory as `libmethod2s.a` file.

* Its archive library does get installed but 'make install' can.

* Its archive library does NOT get packaged but 'make dist' can.


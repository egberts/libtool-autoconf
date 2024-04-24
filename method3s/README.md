Method 3s (static)
==================
Fold an archive (static) library into a "static" executable.

Static object of all object files into an archive library,
then an archive library into a static executable.

NOTE: One drawback of static libraries is, for any 
      change(up-gradation) in the static libraries, 
      you have to recompile the main program 
      every time.

Resultant executable is a ./method3s file.

* Archive library filetype ends with '.a'.

* Using libtool, the archive library get built and stored in 
the ./.libs subdirectory as libmethod3s.a file.

* Its archive library is not installable.

* Its executable file does NOT get packaged but 'make dist' can.


#
#  Shared Object (.so) Library using libtool/autoconf
#
#  After change this file, re-run:
#
#      autoreconf
#
AC_INIT([libmethod2d],[0.9])

AM_INIT_AUTOMAKE([1.11 foreign])

# LT_INIT([shared])
LT_INIT([disable-static])  # used to be AC_PROG_LIBTOOL
AC_NO_EXECUTABLES
AC_PROG_CC

# method2d-specific
AC_ENABLE_SHARED
AC_DISABLE_STATIC

AC_CONFIG_FILES([Makefile])
AM_CONDITIONAL(STATIC,    [test "x$enable_static"  = "xyes"])

# Generate all files
AC_OUTPUT

cat <<EOF

------------------ Summary ------------------
 $PACKAGE_NAME version $PACKAGE_VERSION
  Prefix................: $prefix
  Exec prefix...........: $eprefix
  Sysconfdir............: `eval echo $sysconfdir`
  Localstatedir.........: `eval echo $localstatedir`
  Default fstab.........: `eval echo $fstab`
  Finit config file.....: $conf_path
  Finit config.d path...: $rcsd_path
  Finit plugin path.....: $plugin_path
  Compat rc.local path..: $rclocal_path
  System environment....: ${sysconfig_path:-${sysconfig}}
  Random seed path......: $random_path
  objdir................: $objdir
  libdir................: $libdir
  C Compiler............: $CC $CFLAGS $CPPFLAGS $LDFLAGS $LIBS
  Linker................: $LD $LLDP_LDFLAGS $LLDP_BIN_LDFLAGS $LDFLAGS $LIBS

Behavior:
  Boot heading..........: $heading
  Plugins...............: $plugins
  RTC restore date......: $RTC_DATE

Optional features:
  Install doc/..........: $enable_doc
  Install contrib/......: $enable_contrib
  Bash completion.......: $bash_completion_dir
  Built-in sulogin......: $with_sulogin $sulogin
  Skip fsck check.......: $enable_fastboot
  Run fsck fix mode.....: $enable_fsckfix
  Redirect output.......: $enable_redirect
  Rescue mode...........: $enable_rescue
  Default hostname......: $hostname
  Default group.........: $group
  Default runlevel......: $runlevel

------------- Compiler version --------------
$($CC --version || true)
-------------- Linker version ---------------
$($LD --version || true)
---------------------------------------------

Check the above options and compile with:
 ${MAKE-make}

EOF

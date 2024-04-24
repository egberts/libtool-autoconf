AC_INIT([methods], [1.2])

AM_INIT_AUTOMAKE([foreign])

AC_PROG_CC
AM_PROG_AR

LT_INIT([shared static aix-soname=both])

AC_ENABLE_SHARED(yes)
AC_ENABLE_STATIC(yes) 

AC_CONFIG_FILES([Makefile method2s/Makefile method2d/Makefile method3s/Makefile method3d/Makefile method4/Makefile])

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

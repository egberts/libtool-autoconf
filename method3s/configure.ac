#  After change this file, re-run:
#
#      autoreconf
#
AC_INIT([method3s], [0.9])

AM_INIT_AUTOMAKE([foreign])

AC_PROG_CC

# method3s-specific
LT_INIT([disable-shared])  # used to be AC_PROG_LIBTOOL
# AC_SUBST(LIBTOOL_DEPS) is obsoleted

# method3s-specific
AC_DISABLE_SHARED

AC_CONFIG_FILES([Makefile])

# Generate all files
AC_MSG_NOTICE([notice: ${abs_top_builddir}])
AC_MSG_NOTICE([notice+ac: ${abs_top_builddir}])
AC_CONFIG_COMMANDS_PRE([echo "pre+ac: ${ac_abs_top_builddir}"])
AC_CONFIG_COMMANDS_PRE([echo "pre: ${abs_top_builddir}"])
AC_CONFIG_COMMANDS_POST([echo "post+ac: ${ac_abs_top_builddir}"])
AC_CONFIG_COMMANDS_POST([echo "post: ${abs_top_builddir}"])
AC_CONFIG_COMMANDS([echo],
[echo "config.status+ac: ${ac_abs_top_builddir}"
echo "config.status: ${abs_top_builddir}"])
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

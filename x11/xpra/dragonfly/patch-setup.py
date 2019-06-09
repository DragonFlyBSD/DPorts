--- setup.py.intermediate	2019-06-08 19:08:46.000000000 +0000
+++ setup.py
@@ -24,7 +24,7 @@ from distutils.command.install_data impo
 import xpra
 from xpra.os_util import (
     get_status_output, getUbuntuVersion,
-    PYTHON3, BITS, WIN32, OSX, LINUX, POSIX, NETBSD, FREEBSD, OPENBSD,
+    PYTHON3, BITS, WIN32, OSX, LINUX, POSIX, NETBSD, FREEBSD, OPENBSD, DRAGONFLY,
     is_Ubuntu, is_Debian, is_Raspbian, is_Fedora, is_CentOS,
     )
 
@@ -196,7 +196,7 @@ enc_ffmpeg_ENABLED      = DEFAULT and pk
 webcam_ENABLED          = DEFAULT and not OSX and (not WIN32 or BITS==64)
 notifications_ENABLED   = DEFAULT
 keyboard_ENABLED        = DEFAULT
-v4l2_ENABLED            = DEFAULT and (not WIN32 and not OSX and not FREEBSD and not OPENBSD)
+v4l2_ENABLED            = DEFAULT and (not WIN32 and not OSX and not FREEBSD and not OPENBSD and not DRAGONFLY)
 #ffmpeg 3.1 or later is required
 dec_avcodec2_ENABLED    = DEFAULT and pkg_config_version("57", "libavcodec")
 csc_swscale_ENABLED     = DEFAULT and pkg_config_ok("--exists", "libswscale")
@@ -1551,7 +1551,7 @@ else:
             add_data_files("%s/xpra/" % libexec, libexec_scripts)
     if data_ENABLED:
         man_path = "share/man"
-        if OPENBSD or FREEBSD:
+        if OPENBSD or FREEBSD or DRAGONFLY:
             man_path = "man"
         add_data_files("%s/man1" % man_path,  ["man/xpra.1", "man/xpra_launcher.1"])
         add_data_files("share/applications",  glob.glob("xdg/*.desktop"))

--- setup.py.orig	2017-11-20 00:56:28 UTC
+++ setup.py
@@ -185,7 +185,7 @@ jpeg_ENABLED            = DEFAULT and pk
 vpx_ENABLED             = DEFAULT and pkg_config_version("1.3", "vpx", fallback=WIN32)
 enc_ffmpeg_ENABLED      = DEFAULT and pkg_config_version("56", "libavcodec")
 webcam_ENABLED          = DEFAULT and not OSX
-v4l2_ENABLED            = DEFAULT and (not WIN32 and not OSX and not sys.platform.startswith("freebsd"))
+v4l2_ENABLED            = DEFAULT and (not WIN32 and not OSX and not sys.platform.startswith("freebsd") and not sys.platform.startswith("dragonfly"))
 #ffmpeg 2 onwards:
 dec_avcodec2_ENABLED    = DEFAULT and pkg_config_version("56", "libavcodec", fallback=WIN32)
 # some version strings I found:
@@ -205,7 +205,7 @@ csc_libyuv_ENABLED      = DEFAULT and pk
 #Cython / gcc / packaging build options:
 annotate_ENABLED        = True
 warn_ENABLED            = True
-strict_ENABLED          = True
+strict_ENABLED          = False
 PIC_ENABLED             = not WIN32     #ming32 moans that it is always enabled already
 debug_ENABLED           = False
 verbose_ENABLED         = False

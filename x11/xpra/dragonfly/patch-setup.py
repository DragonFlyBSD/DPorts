--- setup.py.intermediate	2017-02-21 20:13:51 UTC
+++ setup.py
@@ -190,7 +190,7 @@ webp_ENABLED            = False
 vpx_ENABLED             = DEFAULT and pkg_config_version("1.3", "vpx", fallback=WIN32)
 enc_ffmpeg_ENABLED      = DEFAULT and pkg_config_version("56", "libavcodec")
 webcam_ENABLED          = DEFAULT and not OSX
-v4l2_ENABLED            = DEFAULT and (not WIN32 and not OSX and not sys.platform.startswith("freebsd"))
+v4l2_ENABLED            = DEFAULT and (not WIN32 and not OSX and not sys.platform.startswith("freebsd") and not sys.platform.startswith("dragonfly"))
 #ffmpeg 2 onwards:
 dec_avcodec2_ENABLED    = DEFAULT and pkg_config_version("56", "libavcodec", fallback=WIN32)
 # some version strings I found:

--- make/configure.py.orig	2019-02-22 16:23:51 UTC
+++ make/configure.py
@@ -1327,7 +1327,7 @@ def createCLI():
     grp.add_option( '--disable-ffmpeg-aac', dest="enable_ffmpeg_aac", action='store_false' )
 
     h = IfHost( 'enable Nvidia NVEnc video encoder', '*-*-*', none=optparse.SUPPRESS_HELP ).value
-    grp.add_option( '--enable-nvenc', dest="enable_nvenc", default=not (host.match( '*-*-darwin*' ) or host.match( '*-*-freebsd*' )), action='store_true', help=h )
+    grp.add_option( '--enable-nvenc', dest="enable_nvenc", default=not (host.match( '*-*-darwin*' ) or host.match( '*-*-dragonfly*' ) or host.match( '*-*-freebsd*' )), action='store_true', help=h )
 
 
     cli.add_option_group( grp )

--- make/configure.py.orig	2019-11-09 20:44:32 UTC
+++ make/configure.py
@@ -1338,7 +1338,7 @@ def createCLI( cross = None ):
     ## add build options
     grp = cli.add_argument_group( 'Build Options' )
     grp.add_argument( '--snapshot', default=False, action='store_true', help='Force a snapshot build' )
-    h = IfHost( 'Build extra contribs for flatpak packaging', '*-*-linux*', '*-*-freebsd*', none=argparse.SUPPRESS ).value
+    h = IfHost( 'Build extra contribs for flatpak packaging', '*-*-linux*', '*-*-freebsd*', '*-*-dragonfly*', none=argparse.SUPPRESS ).value
     grp.add_argument( '--flatpak', default=False, action='store_true', help=h )
     cli.add_argument_group( grp )
 
@@ -1378,19 +1378,19 @@ def createCLI( cross = None ):
     h = IfHost( 'enable assembly code in non-contrib modules', 'NOMATCH*-*-darwin*', 'NOMATCH*-*-linux*', none=argparse.SUPPRESS ).value
     grp.add_argument( '--enable-asm', default=False, action='store_true', help=h )
 
-    h = IfHost( 'disable GTK GUI', '*-*-linux*', '*-*-freebsd*', none=argparse.SUPPRESS ).value
+    h = IfHost( 'disable GTK GUI', '*-*-linux*', '*-*-freebsd*', '*-*-dragonfly*', none=argparse.SUPPRESS ).value
     grp.add_argument( '--disable-gtk', default=False, action='store_true', help=h )
 
-    h = IfHost( 'disable GTK GUI update checks', '*-*-linux*', '*-*-freebsd*', none=argparse.SUPPRESS ).value
+    h = IfHost( 'disable GTK GUI update checks', '*-*-linux*', '*-*-freebsd*', '*-*-dragonfly*', none=argparse.SUPPRESS ).value
     grp.add_argument( '--disable-gtk-update-checks', default=False, action='store_true', help=h )
 
     h = 'enable GTK GUI for Windows' if (cross is not None and 'mingw' in cross) else argparse.SUPPRESS
     grp.add_argument( '--enable-gtk-mingw', default=False, action='store_true', help=h )
 
-    h = IfHost( 'Build GUI with GTK4', '*-*-linux*', '*-*-freebsd*', none=argparse.SUPPRESS ).value
+    h = IfHost( 'Build GUI with GTK4', '*-*-linux*', '*-*-freebsd*', '*-*-dragonfly*', none=argparse.SUPPRESS ).value
     grp.add_argument( '--enable-gtk4', default=False, action='store_true', help=h )
 
-    h = IfHost( 'disable GStreamer (live preview)', '*-*-linux*', '*-*-freebsd*', none=argparse.SUPPRESS ).value
+    h = IfHost( 'disable GStreamer (live preview)', '*-*-linux*', '*-*-freebsd*', '*-*-dragonfly*', none=argparse.SUPPRESS ).value
     grp.add_argument( '--disable-gst', default=False, action='store_true', help=h )
 
     h = IfHost( 'x265 video encoder', '*-*-*', none=argparse.SUPPRESS ).value
@@ -2038,6 +2038,8 @@ int main()
         doc.addBlank()
         if host_tuple.system == 'freebsd':
             doc.add( 'HAS.pthread', 1 )
+        if host_tuple.system == 'dragonfly':
+            doc.add( 'HAS.pthread', 1 )
         if not strerror_r.fail:
             doc.add( 'HAS.strerror_r', 1 )
 

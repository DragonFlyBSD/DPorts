--- make/configure.py.orig	2021-09-30 19:51:00 UTC
+++ make/configure.py
@@ -697,6 +697,8 @@ class ArchAction( Action ):
             pass
         elif host_tuple.match( '*-*-solaris*' ):
             pass
+        elif host_tuple.match( '*-*-dragonfly*' ):
+            self.mode['x86_64'] = 'x86_64-portsbuild-dragonfly%s' % (host_tuple.release)
         elif host_tuple.match( '*-*-freebsd*' ):
             self.mode['i386']   = 'i386-portsbuild-freebsd%s' % (host_tuple.release)
             self.mode['amd64'] = 'amd64-portsbuild-freebsd%s' % (host_tuple.release)
@@ -1360,7 +1362,7 @@ def createCLI( cross = None ):
     ## add build options
     grp = cli.add_argument_group( 'Build Options' )
     grp.add_argument( '--snapshot', default=False, action='store_true', help='Force a snapshot build' )
-    h = IfHost( 'Build extra contribs for flatpak packaging', '*-*-linux*', '*-*-freebsd*', none=argparse.SUPPRESS ).value
+    h = IfHost( 'Build extra contribs for flatpak packaging', '*-*-linux*', '*-*-freebsd*', '*-*-dragonfly*', none=argparse.SUPPRESS ).value
     grp.add_argument( '--flatpak', default=False, action='store_true', help=h )
     cli.add_argument_group( grp )
 
@@ -1403,19 +1405,19 @@ def createCLI( cross = None ):
     h = IfHost( 'enable assembly code in non-contrib modules', 'NOMATCH*-*-darwin*', 'NOMATCH*-*-linux*', none=argparse.SUPPRESS ).value
     grp.add_argument( '--enable-asm', default=False, action='store_true', help=h )
 
-    h = IfHost( 'disable GTK GUI', '*-*-linux*', '*-*-freebsd*', '*-*-netbsd*', none=argparse.SUPPRESS ).value
+    h = IfHost( 'disable GTK GUI', '*-*-linux*', '*-*-freebsd*', '*-*-dragonfly*', '*-*-netbsd*', none=argparse.SUPPRESS ).value
     grp.add_argument( '--disable-gtk', default=False, action='store_true', help=h )
 
-    h = IfHost( 'disable GTK GUI update checks', '*-*-linux*', '*-*-freebsd*', '*-*-netbsd*', none=argparse.SUPPRESS ).value
+    h = IfHost( 'disable GTK GUI update checks', '*-*-linux*', '*-*-freebsd*', '*-*-dragonfly*', '*-*-netbsd*', none=argparse.SUPPRESS ).value
     grp.add_argument( '--disable-gtk-update-checks', default=False, action='store_true', help=h )
 
     h = 'enable GTK GUI for Windows' if (cross is not None and 'mingw' in cross) else argparse.SUPPRESS
     grp.add_argument( '--enable-gtk-mingw', default=False, action='store_true', help=h )
 
-    h = IfHost( 'Build GUI with GTK4', '*-*-linux*', '*-*-freebsd*', none=argparse.SUPPRESS ).value
+    h = IfHost( 'Build GUI with GTK4', '*-*-linux*', '*-*-freebsd*', '*-*-dragonfly*', none=argparse.SUPPRESS ).value
     grp.add_argument( '--enable-gtk4', default=False, action='store_true', help=h )
 
-    h = IfHost( 'disable GStreamer (live preview)', '*-*-linux*', '*-*-freebsd*', '*-*-netbsd*', none=argparse.SUPPRESS ).value
+    h = IfHost( 'disable GStreamer (live preview)', '*-*-linux*', '*-*-freebsd*', '*-*-dragonfly*', '*-*-netbsd*', none=argparse.SUPPRESS ).value
     grp.add_argument( '--disable-gst', default=False, action='store_true', help=h )
 
     h = IfHost( 'x265 video encoder', '*-*-*', none=argparse.SUPPRESS ).value
@@ -1442,7 +1444,7 @@ def createCLI( cross = None ):
     grp.add_argument( '--enable-nvenc', dest="enable_nvenc", default=IfHost( True, '*-*-linux*', 'x86_64-w64-mingw32', none=False).value, action='store_true', help=(( 'enable %s' %h ) if h != argparse.SUPPRESS else h) )
     grp.add_argument( '--disable-nvenc', dest="enable_nvenc", action='store_false', help=(( 'disable %s' %h ) if h != argparse.SUPPRESS else h) )
 
-    h = IfHost( 'Intel QSV video encoder/decoder', '*-*-linux*', '*-*-freebsd*', 'x86_64-w64-mingw32', none=argparse.SUPPRESS).value
+    h = IfHost( 'Intel QSV video encoder/decoder', '*-*-linux*', '*-*-freebsd*', '*-*-dragonfly*', 'x86_64-w64-mingw32', none=argparse.SUPPRESS).value
     grp.add_argument( '--enable-qsv', dest="enable_qsv", default=IfHost(True, "x86_64-w64-mingw32", none=False).value, action='store_true', help=(( 'enable %s' %h ) if h != argparse.SUPPRESS else h) )
     grp.add_argument( '--disable-qsv', dest="enable_qsv", action='store_false', help=(( 'disable %s' %h ) if h != argparse.SUPPRESS else h) )
 
@@ -1738,7 +1740,7 @@ try:
                                        none=False).value
     options.enable_nvenc      = IfHost(options.enable_nvenc, '*-*-linux*',
                                        'x86_64-w64-mingw32', none=False).value
-    options.enable_qsv        = IfHost(options.enable_qsv, '*-*-linux*', '*-*-freebsd*',
+    options.enable_qsv        = IfHost(options.enable_qsv, '*-*-linux*', '*-*-freebsd*', '*-*-dragonfly*',
                                        'x86_64-w64-mingw32', none=False).value
     options.enable_vce        = IfHost(options.enable_vce, '*-*-linux*',
                                        'x86_64-w64-mingw32', none=False).value
@@ -2090,7 +2092,7 @@ int main()
 
     else:
         doc.addBlank()
-        if host_tuple.system in ('freebsd', 'netbsd'):
+        if host_tuple.system in ('freebsd', 'dragonfly', 'netbsd'):
             doc.add( 'HAS.pthread', 1 )
         if not strerror_r.fail:
             doc.add( 'HAS.strerror_r', 1 )
@@ -2180,7 +2182,7 @@ int main()
     stdout.write( 'Enable NVENC:       %s' % options.enable_nvenc )
     stdout.write( ' (%s)\n' % note_unsupported ) if not (host_tuple.system == 'linux' or host_tuple.match( 'x86_64-w64-mingw32' )) else stdout.write( '\n' )
     stdout.write( 'Enable QSV:         %s' % options.enable_qsv )
-    stdout.write( ' (%s)\n' % note_unsupported ) if not (host_tuple.system == 'linux' or host_tuple.match( 'x86_64-w64-mingw32' ) or host_tuple.system == 'freebsd') else stdout.write( '\n' )
+    stdout.write( ' (%s)\n' % note_unsupported ) if not (host_tuple.system == 'linux' or host_tuple.match( 'x86_64-w64-mingw32' ) or host_tuple.system == 'freebsd' or host_tuple.system == 'dragonfly') else stdout.write( '\n' )
     stdout.write( 'Enable VCE:         %s' % options.enable_vce )
     stdout.write( ' (%s)\n' % note_unsupported ) if not (host_tuple.system == 'linux' or host_tuple.match( 'x86_64-w64-mingw32' )) else stdout.write( '\n' )
 

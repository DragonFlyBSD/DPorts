
$FreeBSD: x11/hotwire-shell/files/patch-setup.py 300897 2012-07-14 14:29:18Z beat $

--- setup.py.orig
+++ setup.py
@@ -103,7 +103,7 @@
         if os.name == 'posix':                       
             if self.root is None:
                 print "Running gtk-update-icon-cache"
-                subprocess.call(['gtk-update-icon-cache', os.path.join(self.install_data, 'icons')])
+                subprocess.call(['gtk-update-icon-cache', os.path.join(self.install_data, 'share', 'icons', 'hicolor')])
 kwargs['cmdclass']['install'] = HotInstall                    
 
 setup(name='hotwire',

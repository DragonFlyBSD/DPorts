--- example/gtk-hello.scm.bak	2015-09-19 14:53:19.000000000 +0300
+++ example/gtk-hello.scm
@@ -18,6 +18,7 @@
 (define libgtk-name (cond (on-linux "libgtk-x11-2.0.so.0")
                           (on-darwin "Gtk.framework/Gtk")
                           (on-freebsd "libgtk-x11-2.0.so")
+                          (on-dragonfly "libgtk-x11-2.0.so")
                           (else
                            (assertion-violation #f "can not locate GTK library, unknown operating system"))))
 

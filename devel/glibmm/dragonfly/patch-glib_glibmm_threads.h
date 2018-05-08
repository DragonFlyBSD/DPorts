Typo?
glibmm/threads.h:661:29: error: cannot convert 'GPrivate' {aka '_GPrivate'} to 'GPrivate*' {aka '_GPrivate*'} in return

--- glib/glibmm/threads.h.orig	2017-04-04 17:54:39.000000000 +0000
+++ glib/glibmm/threads.h
@@ -658,7 +658,7 @@ public:
    */
   inline void replace(T* data);
 
-  GPrivate* gobj() { return gobject_; }
+  GPrivate* gobj() { return &gobject_; }
 
 private:
   GPrivate gobject_;

--- libstdc++-v3/config/os/bsd/dragonfly/ctype_base.h.intermediate	2013-01-29 10:52:38.048019000 +0100
+++ libstdc++-v3/config/os/bsd/dragonfly/ctype_base.h	2013-01-29 10:53:19.584835000 +0100
@@ -38,7 +38,7 @@
   struct ctype_base
   {
     // Non-standard typedefs.
-    typedef const unsigned char*	__to_type;
+    typedef const int*		__to_type;
 
     // NB: Offsets into ctype<char>::_M_table force a particular size
     // on the mask type. Because of this, we don't use an enum.

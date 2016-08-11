--- Make.inc.intermediate	2016-08-11 13:37:28 UTC
+++ Make.inc
@@ -18,6 +18,10 @@ else
   pkgconfigdir = $(libdir)/pkgconfig
 endif
 
+ifeq ($(OS), DragonFly)
+  pkgconfigdir = $(prefix)/libdata/pkgconfig
+endif
+
 USEGCC = 1
 USECLANG = 0
 

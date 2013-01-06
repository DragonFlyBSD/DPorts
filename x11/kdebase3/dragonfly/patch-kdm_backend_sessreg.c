--- kdm/backend/sessreg.c.intermediate	2013-01-06 18:16:19.339586000 +0100
+++ kdm/backend/sessreg.c	2013-01-06 18:17:00.399643000 +0100
@@ -70,7 +70,8 @@
 #endif
 
 #ifdef BSD
-# if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__)
+# if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__) \
+  && !defined(__DragonFly__)
 /* *BSD doesn't like a ':0' type entry in utmp */
 #  define NO_UTMP
 # endif

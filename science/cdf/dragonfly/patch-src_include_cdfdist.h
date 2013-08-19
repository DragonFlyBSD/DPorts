--- src/include/cdfdist.h.orig	2009-05-27 16:53:59.000000000 +0000
+++ src/include/cdfdist.h
@@ -117,7 +117,7 @@
 #endif
 
 #if defined(linux) || defined(__CYGWIN__) || defined(__MINGW32__) || \
-    defined(__FreeBSD__)
+    defined(__FreeBSD__) || defined(__DragonFly__)
 #  if defined(PPC) || defined(__PPC__) 
 #    define POWERPC
 #  else
@@ -159,7 +159,7 @@
 #        define alphavmsI
 #      endif
 #    else           /* "vms" not defined if "-W ansi89" used. */
-#      if !defined(linux) && !defined(__FreeBSD__)
+#      if !defined(linux) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #        define posixSHELL
 #        define posixSHELLalpha
 #        if __D_FLOAT
@@ -489,7 +489,7 @@ typedef sChar sByte;
 #    if defined(__osf__) || defined(__CYGWIN__) || \
         defined(vms) || defined(sgi) || defined(__MINGW32__) || \
         defined(__FreeBSD__) || defined(macosXintel) || defined(macosXppc) || \
-        defined(__PPC__)
+        defined(__PPC__) || defined(__DragonFly__)
 #      define FOPEN64 fopen
 #    else
 #      define FOPEN64 fopen64

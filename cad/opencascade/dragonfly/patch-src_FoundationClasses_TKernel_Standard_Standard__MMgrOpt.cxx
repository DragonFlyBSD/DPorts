--- src/FoundationClasses/TKernel/Standard/Standard_MMgrOpt.cxx.orig
+++ src/FoundationClasses/TKernel/Standard/Standard_MMgrOpt.cxx
@@ -250,7 +250,7 @@
 #endif
 
 #if defined(IRIX) || defined(__sgi) || defined(SOLARIS) || defined(__sun) || defined(__linux__)    \
-  || defined(__FreeBSD__) || defined(__ANDROID__)
+  || defined(__FreeBSD__) || defined(__ANDROID__) || defined(__DragonFly__)
     if ((myMMap = open("/dev/zero", O_RDWR)) < 0)
     {
       if ((myMMap = open("/dev/null", O_RDWR)) < 0)

--- socket++/sig.cpp.orig	2011-12-27 11:23:48 UTC
+++ socket++/sig.cpp
@@ -153,7 +153,7 @@ void sig::sysresume (int signo, bool set
     sa.sa_flags = 0;
   }
 
-#if !(defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__) || defined(__sun__) || defined(__linux__) || defined(__APPLE))
+#if !(defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__) || defined(__sun__) || defined(__linux__) || defined(__APPLE))
 // Early SunOS versions may have SA_INTERRUPT. I can't confirm.
   if (set == false)
     sa.sa_flags |= SA_INTERRUPT;

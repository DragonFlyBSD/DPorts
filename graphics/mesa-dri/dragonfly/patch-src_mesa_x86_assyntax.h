--- src/mesa/x86/assyntax.h.orig	2022-01-12 21:32:28 UTC
+++ src/mesa/x86/assyntax.h
@@ -977,7 +977,7 @@
 
 #if defined(Lynx) || (defined(SYSV) || defined(SVR4)) \
  || (defined(__linux__) || defined(__OS2ELF__)) && defined(__ELF__) \
- || (defined(__FreeBSD__) && __FreeBSD__ >= 3) \
+ || (defined(__FreeBSD__) && __FreeBSD__ >= 3) || defined(__DragonFly__) \
  || (defined(__NetBSD__) && defined(__ELF__))
 #define GLNAME(a)	a
 #else

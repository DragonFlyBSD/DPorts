--- socket++/sockstream.cpp.orig	2011-12-27 11:25:33 UTC
+++ socket++/sockstream.cpp
@@ -232,7 +232,7 @@ bool sockerr::benign () const
   case EWOULDBLOCK:
 // On FreeBSD (and probably on Linux too) 
 // EAGAIN has the same value as EWOULDBLOCK
-#if !defined(__linux__) && !(defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__) || defined(__APPLE__)) // LN
+#if !defined(__linux__) && !(defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__) || defined(__APPLE__)) // LN
   case EAGAIN:
 #endif
     return true;

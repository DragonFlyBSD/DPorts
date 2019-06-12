--- src/qtwebkit-manager.hpp.orig	2018-09-02 22:04:19 UTC
+++ src/qtwebkit-manager.hpp
@@ -18,7 +18,7 @@ along with this program.  If not, see <h
 #pragma once
 
 #include <obs/obs-module.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/stat.h>
 #endif
 

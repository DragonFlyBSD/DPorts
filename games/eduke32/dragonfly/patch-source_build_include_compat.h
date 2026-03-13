--- source/build/include/compat.h.orig	2026-02-13 12:33:16.922238000 +0100
+++ source/build/include/compat.h	2026-02-13 12:34:11.822649000 +0100
@@ -7,7 +7,7 @@
 
 #pragma once
 
-#ifndef __APPLE__
+#if !defined(__APPLE__) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 #include <stdlib.h>

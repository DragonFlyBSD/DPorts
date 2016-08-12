--- include/ntop_includes.h.orig	2016-06-27 15:12:56.000000000 +0300
+++ include/ntop_includes.h
@@ -204,7 +204,7 @@ using namespace std;
 #include "NetfilterInterface.h"
 #endif
 #endif
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 #include "DivertInterface.h"
 #endif
 #include "ParserInterface.h"

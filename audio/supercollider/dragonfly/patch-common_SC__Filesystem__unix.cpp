--- common/SC_Filesystem_unix.cpp.intermediate	2019-07-16 21:48:18 UTC
+++ common/SC_Filesystem_unix.cpp
@@ -23,9 +23,10 @@
  */
 
 /*
- * SC_Filesystem implementation for Linux/FreeBSD/OpenBSD.
+ * SC_Filesystem implementation for Linux/FreeBSD/OpenBSD/DragonFly BSD.
  */
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || \
+    defined(__DragonFly__)
 
 #include "SC_Filesystem.hpp"
 
@@ -134,4 +135,4 @@ Path SC_Filesystem::defaultResourceDirec
 #endif
 }
 
-#endif // defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#endif // defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)

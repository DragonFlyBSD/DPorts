--- src/large_pages/node_large_page.cc.orig	2020-01-21 16:26:43 UTC
+++ src/large_pages/node_large_page.cc
@@ -160,6 +160,13 @@ static struct text_region FindNodeTextRe
   }
 
   ifs.close();
+#elif defined(__DragonFly__)
+  // XXX meh meh
+  // We could actually do something similar to what linux does
+  // by reading /proc/curproc/map but adding a sysctl like the
+  // one FreeBSD has (KERN_PROC_VMMAP) is more correct so that we
+  // can get away from procfs. Anyways, for now just do nothing.
+  struct text_region nregion;
 #elif defined(__FreeBSD__)
   struct text_region nregion;
   nregion.found_text_region = false;
@@ -289,6 +296,11 @@ static bool IsSuperPagesEnabled() {
                       0) != -1 &&
          super_pages >= 1;
 }
+#elif defined(__DragonFly__)
+static bool IsSuperPagesEnabled() {
+  // This effectively disables large pages.
+  return 0;
+} 
 #endif
 
 // Moving the text region to large pages. We need to be very careful.
@@ -427,7 +439,7 @@ int MapStaticCodeToLargePages() {
 bool IsLargePagesEnabled() {
 #if defined(__linux__)
   return IsTransparentHugePagesEnabled();
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   return IsSuperPagesEnabled();
 #elif defined(__APPLE__)
   // pse-36 flag is present in recent mac x64 products.

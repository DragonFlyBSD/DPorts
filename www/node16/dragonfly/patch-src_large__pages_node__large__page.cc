--- src/large_pages/node_large_page.cc.orig	2020-04-14 16:40:37 UTC
+++ src/large_pages/node_large_page.cc
@@ -292,6 +292,11 @@ bool IsSuperPagesEnabled() {
                       0) != -1 &&
          super_pages >= 1;
 }
+#elif defined(__DragonFly__)
+static bool IsSuperPagesEnabled() {
+  // This effectively disables large pages.
+  return 0;
+} 
 #endif
 
 // Functions in this class must always be inlined because they must end up in
@@ -404,7 +409,7 @@ int MapStaticCodeToLargePages() {
   bool have_thp = false;
 #if defined(__linux__)
   have_thp = IsTransparentHugePagesEnabled();
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   have_thp = IsSuperPagesEnabled();
 #elif defined(__APPLE__)
   // pse-36 flag is present in recent mac x64 products.

--- src/large_pages/node_large_page.cc.orig	2020-03-26 20:00:02 UTC
+++ src/large_pages/node_large_page.cc
@@ -187,6 +187,12 @@ struct text_region FindNodeTextRegion()
       }
     }
   }
+#elif defined(__DragonFly__)
+  // XXX meh meh
+  // We could actually do something similar to what linux does
+  // by reading /proc/curproc/map but adding a sysctl like the
+  // one FreeBSD has (KERN_PROC_VMMAP) is more correct so that we
+  // can get away from procfs. Anyways, for now just do nothing.
 #elif defined(__FreeBSD__)
   std::string exename;
   {
@@ -312,6 +318,11 @@ bool IsSuperPagesEnabled() {
                       0) != -1 &&
          super_pages >= 1;
 }
+#elif defined(__DragonFly__)
+static bool IsSuperPagesEnabled() {
+  // This effectively disables large pages.
+  return 0;
+} 
 #endif
 
 }  // End of anonymous namespace
@@ -438,7 +449,7 @@ int MapStaticCodeToLargePages() {
   bool have_thp = false;
 #if defined(__linux__)
   have_thp = IsTransparentHugePagesEnabled();
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   have_thp = IsSuperPagesEnabled();
 #elif defined(__APPLE__)
   // pse-36 flag is present in recent mac x64 products.

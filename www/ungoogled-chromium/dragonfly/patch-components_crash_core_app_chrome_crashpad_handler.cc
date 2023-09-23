diff --git components/crash/core/app/chrome_crashpad_handler.cc components/crash/core/app/chrome_crashpad_handler.cc
index 9aa752e77f9..b602ddb1088 100644
--- components/crash/core/app/chrome_crashpad_handler.cc
+++ components/crash/core/app/chrome_crashpad_handler.cc
@@ -6,7 +6,7 @@
 extern "C" int CrashpadHandlerMain(int argc, char* argv[]);
 
 int main(int argc, char* argv[]) {
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
   return -1;
 #else
   return CrashpadHandlerMain(argc, argv);

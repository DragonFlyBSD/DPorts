--- client/human/chmain.cpp.orig	2018-08-23 09:41:14 UTC
+++ client/human/chmain.cpp
@@ -53,7 +53,7 @@ int mainSetupAndRun();
 int mainConfigOptionsSetup(const std::vector<std::string>& args);
 
 
-#if defined(FREEORION_LINUX) || defined(FREEORION_FREEBSD) || defined(FREEORION_OPENBSD)
+#if defined(FREEORION_LINUX) || defined(FREEORION_FREEBSD) || defined(FREEORION_OPENBSD) || defined(FREEORION_DRAGONFLY)
 int main(int argc, char* argv[]) {
     // copy command line arguments to vector
     std::vector<std::string> args;

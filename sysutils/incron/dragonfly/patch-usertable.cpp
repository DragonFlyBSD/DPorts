--- usertable.cpp.intermediate	2021-12-27 11:19:16.000000000 +0000
+++ usertable.cpp
@@ -571,7 +571,7 @@ bool UserTable::MayAccess(const std::str
   return false; // no access right found
 }
 
-#ifndef __linux__
+#if !defined(__linux__) && !defined(__DragonFly__) && !defined(__FreeBSD__)
 static int
 clearenv(void)
 {

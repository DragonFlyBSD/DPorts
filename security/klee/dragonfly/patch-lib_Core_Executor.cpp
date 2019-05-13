--- lib/Core/Executor.cpp.intermediate	2019-05-13 05:41:11.000000000 +0000
+++ lib/Core/Executor.cpp
@@ -4094,7 +4094,7 @@ void Executor::prepareForEarlyExit() {
 
 /// Returns the errno location in memory
 int *Executor::getErrnoLocation(const ExecutionState &state) const {
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
   /* From /usr/include/errno.h: it [errno] is a per-thread variable. */
   return __errno_location();
 #else

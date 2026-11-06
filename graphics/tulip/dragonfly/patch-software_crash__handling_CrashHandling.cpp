--- software/crash_handling/CrashHandling.cpp.orig	2025-03-31 21:30:22 UTC
+++ software/crash_handling/CrashHandling.cpp
@@ -90,7 +90,7 @@ static void dumpStackTrace(StackWalker &sw) {
 
 #if defined(__APPLE__)
 #include <sys/ucontext.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/ucontext.h>
 typedef ucontext_t sig_ucontext_t;
 #else
@@ -114,13 +114,13 @@ void dumpStack(int sig, siginfo_t *, void *ucontext) {
 
   sig_ucontext_t *uc = reinterpret_cast<sig_ucontext_t *>(ucontext);
 #if defined(__i386__)
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   void *callerAddress = reinterpret_cast<void *>(uc->uc_mcontext.mc_eip); // x86 specific;
 #else
   void *callerAddress = reinterpret_cast<void *>(uc->uc_mcontext.eip); // x86 specific;
 #endif
 #else
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   void *callerAddress = reinterpret_cast<void *>(uc->uc_mcontext.mc_rip); // x86_64 specific;
 #else
   void *callerAddress = reinterpret_cast<void *>(uc->uc_mcontext.rip); // x86_64 specific;

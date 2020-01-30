--- src/debug/debughelper.cpp.orig	2019-12-24 11:57:23 UTC
+++ src/debug/debughelper.cpp
@@ -33,7 +33,7 @@
 #endif
 
 
-#if (defined(__unix__) || defined(unix) || defined(__linux__) || defined(linux) || defined(__gnu_hurd__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__))
+#if (defined(__unix__) || defined(unix) || defined(__linux__) || defined(linux) || defined(__gnu_hurd__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__))
 #define OS_IS_LINUX_LIKE
 #endif
 
@@ -492,7 +492,7 @@ QString print_backtrace(const QString &m
 
 #define USE_SIGNAL_HANDLER
 #ifdef CPU_IS_X86_64
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define PC_FROM_UCONTEXT(context) (context)->uc_mcontext.mc_rip
 #define STACK_FROM_UCONTEXT(context) (context)->uc_mcontext.mc_rsp
 #define FRAME_FROM_UCONTEXT(context) (context)->uc_mcontext.mc_rbp
@@ -551,9 +551,14 @@ QString print_backtrace(const QString &m
 #error Unknown cpu architecture
 #endif
 
+#ifdef __DragonFly__
+#define SIGMYHANG SIGCKPTEXIT + 4             //signal send to the main thread, if the guardian detects an endless loop
+#define SIGMYHANG_CONTINUE SIGCKPTEXIT + 5    //signal send to the main thread, if the endless loop should be continued
+#else
 #define SIGMYHANG SIGRTMIN + 4             //signal send to the main thread, if the guardian detects an endless loop
 #define SIGMYHANG_CONTINUE SIGRTMIN + 5    //signal send to the main thread, if the endless loop should be continued
 #endif
+#endif
 
 #ifdef Q_OS_MAC
 #include "signal.h"

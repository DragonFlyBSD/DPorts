--- src/debughelper.cpp.orig	2018-01-29 19:09:36 UTC
+++ src/debughelper.cpp
@@ -33,7 +33,7 @@
 #endif
 
 
-#if (defined(__unix__) || defined(unix) || defined(__linux__) || defined(linux) || defined(__gnu_hurd__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__))
+#if (defined(__unix__) || defined(unix) || defined(__linux__) || defined(linux) || defined(__gnu_hurd__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)) || defined(__DragonFly__)
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
@@ -502,7 +502,7 @@ QString print_backtrace(const QString &m
 #define FRAME_FROM_UCONTEXT(context) (context)->uc_mcontext.gregs[REG_RBP]
 #endif
 #elif defined(CPU_IS_X86_32)
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define PC_FROM_UCONTEXT(context) (context)->uc_mcontext.mc_eip
 #define STACK_FROM_UCONTEXT(context) (context)->uc_mcontext.mc_esp
 #define FRAME_FROM_UCONTEXT(context) (context)->uc_mcontext.mc_ebp
@@ -551,8 +551,8 @@ QString print_backtrace(const QString &m
 #error Unknown cpu architecture
 #endif
 
-#define SIGMYHANG SIGRTMIN + 4             //signal send to the main thread, if the guardian detects an endless loop
-#define SIGMYHANG_CONTINUE SIGRTMIN + 5    //signal send to the main thread, if the endless loop should be continued
+#define SIGMYHANG SIGCKPTEXIT + 4             //signal send to the main thread, if the guardian detects an endless loop
+#define SIGMYHANG_CONTINUE SIGCKPTEXIT + 5    //signal send to the main thread, if the endless loop should be continued
 #endif
 
 #ifdef Q_OS_MAC

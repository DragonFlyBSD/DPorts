--- debughelper.cpp.orig	2015-10-08 23:03:09.674861000 +0200
+++ debughelper.cpp	2015-10-08 23:04:34.916507000 +0200
@@ -474,7 +474,7 @@
 
 #define USE_SIGNAL_HANDLER
 #ifdef CPU_IS_X86_64
- #if defined(__FreeBSD__) 
+ #if defined(__FreeBSD__) || defined(__DragonFly__)
   #define PC_FROM_UCONTEXT(context) (context)->uc_mcontext.mc_rip
   #define STACK_FROM_UCONTEXT(context) (context)->uc_mcontext.mc_rsp
   #define FRAME_FROM_UCONTEXT(context) (context)->uc_mcontext.mc_rbp
@@ -484,7 +484,7 @@
   #define FRAME_FROM_UCONTEXT(context) (context)->uc_mcontext.gregs[REG_RBP]
  #endif
 #elif defined(CPU_IS_X86_32)
- #if defined(__FreeBSD__)
+ #if defined(__FreeBSD__) || defined(__DragonFly__)
   #define PC_FROM_UCONTEXT(context) (context)->uc_mcontext.mc_eip
   #define STACK_FROM_UCONTEXT(context) (context)->uc_mcontext.mc_esp
   #define FRAME_FROM_UCONTEXT(context) (context)->uc_mcontext.mc_ebp
@@ -533,8 +533,8 @@
 #error Unknown cpu architecture
 #endif
 
-#define SIGMYHANG SIGRTMIN + 4             //signal send to the main thread, if the guardian detects an endless loop
-#define SIGMYHANG_CONTINUE SIGRTMIN + 5    //signal send to the main thread, if the endless loop should be continued
+#define SIGMYHANG SIGCKPTEXIT + 4             //signal send to the main thread, if the guardian detects an endless loop
+#define SIGMYHANG_CONTINUE SIGCKPTEXIT + 5    //signal send to the main thread, if the endless loop should be continued
 #endif
 
 #ifdef Q_OS_MAC

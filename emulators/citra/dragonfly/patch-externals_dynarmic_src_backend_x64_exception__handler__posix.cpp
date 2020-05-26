--- externals/dynarmic/src/backend/x64/exception_handler_posix.cpp.orig	2020-04-18 10:40:58 UTC
+++ externals/dynarmic/src/backend/x64/exception_handler_posix.cpp
@@ -113,7 +113,7 @@ void SigHandler::SigAction(int sig, sigi
 #elif defined(__linux__)
     #define CTX_RIP (((ucontext_t*)raw_context)->uc_mcontext.gregs[REG_RIP])
     #define CTX_RSP (((ucontext_t*)raw_context)->uc_mcontext.gregs[REG_RSP])
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     #define CTX_RIP (((ucontext_t*)raw_context)->uc_mcontext.mc_rip)
     #define CTX_RSP (((ucontext_t*)raw_context)->uc_mcontext.mc_rsp)
 #else

--- externals/dynarmic/src/backend/x64/exception_handler_posix.cpp.orig	2020-08-14 20:49:40 UTC
+++ externals/dynarmic/src/backend/x64/exception_handler_posix.cpp
@@ -117,7 +117,7 @@ void SigHandler::SigAction(int sig, sigi
 #elif defined(__linux__)
     #define CTX_RIP (((ucontext_t*)raw_context)->uc_mcontext.gregs[REG_RIP])
     #define CTX_RSP (((ucontext_t*)raw_context)->uc_mcontext.gregs[REG_RSP])
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     #define CTX_RIP (((ucontext_t*)raw_context)->uc_mcontext.mc_rip)
     #define CTX_RSP (((ucontext_t*)raw_context)->uc_mcontext.mc_rsp)
 #else

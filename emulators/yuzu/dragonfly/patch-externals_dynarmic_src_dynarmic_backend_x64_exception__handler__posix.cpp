--- externals/dynarmic/src/dynarmic/backend/x64/exception_handler_posix.cpp.orig	2021-08-15 18:32:05 UTC
+++ externals/dynarmic/src/dynarmic/backend/x64/exception_handler_posix.cpp
@@ -127,7 +127,7 @@ void SigHandler::SigAction(int sig, sigi
 #elif defined(__linux__)
 #    define CTX_RIP (((ucontext_t*)raw_context)->uc_mcontext.gregs[REG_RIP])
 #    define CTX_RSP (((ucontext_t*)raw_context)->uc_mcontext.gregs[REG_RSP])
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #    define CTX_RIP (((ucontext_t*)raw_context)->uc_mcontext.mc_rip)
 #    define CTX_RSP (((ucontext_t*)raw_context)->uc_mcontext.mc_rsp)
 #else

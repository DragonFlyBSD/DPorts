--- benchmark/getcontext_light.cc.orig	2017-07-05 02:50:28 UTC
+++ benchmark/getcontext_light.cc
@@ -6,7 +6,7 @@ extern "C" void getcontext_light(ucontex
 // clang's built-in asm cannot handle .set directives
 #if defined(__GNUC__) && !defined(__llvm__) && defined(__x86_64) && defined(_LP64)
 
-#define R(r) offsetof(ucontext_t, uc_mcontext.gregs[r])
+#define R(r) offsetof(ucontext_t, r)
 
 static __attribute__((used))
 void getcontext_tramp(ucontext_t *ctx) {
@@ -19,14 +19,14 @@ void getcontext_tramp(ucontext_t *ctx) {
 			     ".set oRIP, %c6\n"
 			     ".set oRSP, %c7\n"
 			     : :
-			       "p" (R(REG_RBX)),
-			       "p" (R(REG_RBP)),
-			       "p" (R(REG_R12)),
-			       "p" (R(REG_R13)),
-			       "p" (R(REG_R14)),
-			       "p" (R(REG_R15)),
-			       "p" (R(REG_RIP)),
-			       "p" (R(REG_RSP)));
+			       "p" (R(uc_mcontext.mc_rbx)),
+			       "p" (R(uc_mcontext.mc_rbp)),
+			       "p" (R(uc_mcontext.mc_r12)),
+			       "p" (R(uc_mcontext.mc_r13)),
+			       "p" (R(uc_mcontext.mc_r14)),
+			       "p" (R(uc_mcontext.mc_r15)),
+			       "p" (R(uc_mcontext.mc_rip)),
+			       "p" (R(uc_mcontext.mc_rsp)));
 	getcontext_light(ctx);
 }
 

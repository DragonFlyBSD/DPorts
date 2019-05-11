--- mbdyn/base/solver.cc.orig	2017-01-12 18:08:53 UTC
+++ mbdyn/base/solver.cc
@@ -110,7 +110,7 @@ enum {
 };
 
 volatile sig_atomic_t mbdyn_keep_going = MBDYN_KEEP_GOING;
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 __sighandler_t *mbdyn_sh_term = SIG_DFL;
 __sighandler_t *mbdyn_sh_int = SIG_DFL;
 __sighandler_t *mbdyn_sh_hup = SIG_DFL;
@@ -208,7 +208,7 @@ extern "C" void
 mbdyn_signal_init(int pre)
 {
 #ifdef HAVE_SIGNAL
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	__sighandler_t *hdl;
 #else // ! defined(__FreeBSD__)
  	__sighandler_t hdl;

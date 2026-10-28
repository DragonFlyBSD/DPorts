--- Onboard/osk/osk_util.c.orig
+++ Onboard/osk/osk_util.c
@@ -37,7 +37,7 @@
 
     GdkDisplay *display;
     Atom atom_net_active_window;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #ifndef _NSIG
 #define _NSIG NSIG
 #endif

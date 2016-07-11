--- snd_dma.c.orig	2001-05-18 22:06:36.000000000 +0200
+++ snd_dma.c
@@ -62,7 +62,7 @@ cvar_t snd_show = { "snd_show", "0" };
 // number of times S_Update() is called per second.
 //
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 qboolean fakedma = true;
 #else
 qboolean fakedma = false;

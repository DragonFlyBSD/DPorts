--- src/dsp.h.orig	2011-08-06 12:11:52 UTC
+++ src/dsp.h
@@ -28,7 +28,9 @@
 /* GTK headers */
 #include <gtk/gtk.h>
 
+#ifndef __DragonFly__
 #include <pulse/simple.h>
+#endif
 
 /* own headers */
 #include "threadtalk.h"
@@ -38,7 +40,9 @@ typedef struct dsp_t {
   char* soundname;
   char* soundsystem;
 
+#ifndef __DragonFly__
   pa_simple *pas;   /* pa simple playback stream */
+#endif
 
   int dspfd;        /* file descriptor */
   int fragmentsize; /* fragment size */

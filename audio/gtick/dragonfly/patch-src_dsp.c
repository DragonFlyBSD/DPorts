--- src/dsp.c.orig	2013-03-08 10:02:51 UTC
+++ src/dsp.c
@@ -50,9 +50,11 @@
 #include <dmalloc.h>
 #endif
 
+#ifndef __DragonFly__
 #include <pulse/simple.h>
 #include <pulse/error.h>
 #include <pulse/gccmacro.h>
+#endif
 
 /* own headers */
 #include "g711.h"
@@ -487,6 +489,7 @@ static int prepare_buffers(dsp_t* dsp) {
  *
  * returns 0 on success, -1 otherwise
  */
+#ifndef __DragonFly__
 static int pulse_open(dsp_t *dsp)
 {
   static int debug_todo = 1;
@@ -537,6 +540,7 @@ static int pulse_open(dsp_t *dsp)
 
   return 0;
 }
+#endif
 
 /*
  * Opens sound device specified in dsp
@@ -555,8 +559,12 @@ int dsp_open(dsp_t* dsp) {
     g_print ("dsp_open: Initialising %s ...\n", dsp->devicename);
 
   /* Initialise sound device */
+#ifdef __DragonFly__
+  if (0) { }
+#else
   if(!strcmp(dsp->soundsystem, "<pulseaudio>"))
     return pulse_open(dsp);
+#endif
   else if ((dsp->dspfd = open(dsp->devicename, O_WRONLY)) == -1)
     {
       perror(dsp->devicename);
@@ -668,10 +676,12 @@ void dsp_close(dsp_t* dsp) {
     }
   }
 
+#ifndef __DragonFly__
   if (dsp->pas) {
     pa_simple_free(dsp->pas);
     dsp->pas = NULL;
   }
+#endif
 
   debug_todo = 0;
 }
@@ -766,6 +776,7 @@ static void wrap_position(dsp_t* dsp, in
 /*
  * Feed pulseaudio stream with next samples
  */
+#ifndef __DragonFly__
 gboolean pulse_feed(dsp_t* dsp)
 {
   int ticklen = rint(dsp->rate / dsp->frequency) *
@@ -823,6 +834,7 @@ gboolean pulse_feed(dsp_t* dsp)
 
   return 1;
 }
+#endif
 
 /*
  * Feed dsp device with next samples
@@ -1014,8 +1026,10 @@ void dsp_main_loop(dsp_t* dsp) {
     if (dsp->running) { /* metronome running */
       if (dsp->dspfd != -1) { /* metronome running */
         dsp_feed(dsp);
+#ifndef __DragonFly__
       } else {
         pulse_feed(dsp);
+#endif
       }
     }
 

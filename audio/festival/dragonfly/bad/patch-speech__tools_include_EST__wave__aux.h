--- speech_tools/include/EST_wave_aux.h.orig	2005-04-14 22:58:08.000000000 +0000
+++ speech_tools/include/EST_wave_aux.h
@@ -101,7 +101,7 @@ void short_to_ulaw(const short *data,uns
 // Used when setting Waves in Features
 VAL_REGISTER_CLASS_DCLS(wave,EST_Wave)
 
-typedef enum EST_sample_type_t {
+enum EST_sample_type_t {
   st_unknown, 
   st_schar, 
   st_uchar, 

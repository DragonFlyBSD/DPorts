--- architecture/faust/dsp/timed-dsp.h.intermediate	2019-05-12 19:48:14.000000000 +0000
+++ architecture/faust/dsp/timed-dsp.h
@@ -46,7 +46,7 @@ namespace {
 #endif
 #endif
 
-#if __linux__
+#if __linux__ || __DragonFly__
 #include <sys/time.h>
 inline double GetCurrentTimeInUsec() 
 {

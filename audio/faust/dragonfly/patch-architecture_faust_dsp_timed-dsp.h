--- architecture/faust/dsp/timed-dsp.h.intermediate	2021-03-04 17:57:04.000000000 +0000
+++ architecture/faust/dsp/timed-dsp.h
@@ -47,7 +47,7 @@ namespace {
 #endif
 #endif
 
-#if __linux__ || defined(__FreeBSD__)
+#if __linux__ || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/time.h>
 inline double GetCurrentTimeInUsec() 
 {

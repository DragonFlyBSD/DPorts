--- Lib/proto.h.intermediate	2013-03-21 08:45:42.246168000 +0000
+++ Lib/proto.h
@@ -456,7 +456,7 @@
  void saxpy(long, float, float *, long, float *, long); 
  void RandomPermute(long, idxtype *, long); 
  double drand48(); 
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
  void srand48(long); 
 #endif
  long ispow2(long); 

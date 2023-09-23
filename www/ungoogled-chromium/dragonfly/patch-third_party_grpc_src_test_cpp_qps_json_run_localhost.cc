diff --git third_party/grpc/src/test/cpp/qps/json_run_localhost.cc third_party/grpc/src/test/cpp/qps/json_run_localhost.cc
index a36847d079f..b0d64744eae 100644
--- third_party/grpc/src/test/cpp/qps/json_run_localhost.cc
+++ third_party/grpc/src/test/cpp/qps/json_run_localhost.cc
@@ -24,7 +24,7 @@
 #include <sstream>
 #include <string>
 
-#ifdef __FreeBSD__
+#ifdef defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/wait.h>
 #endif
 

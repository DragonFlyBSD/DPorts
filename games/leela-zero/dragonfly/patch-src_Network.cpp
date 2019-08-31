--- src/Network.cpp.intermediate	2019-08-30 17:30:00.000000000 +0000
+++ src/Network.cpp
@@ -475,7 +475,7 @@ void Network::select_precision(int chann
 
 void Network::initialize(int playouts, const std::string & weightsfile) {
 #ifdef USE_BLAS
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #ifdef USE_OPENBLAS
     openblas_set_num_threads(1);
     myprintf("BLAS Core: %s\n", openblas_get_corename());

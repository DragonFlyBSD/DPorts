--- src/CImg.h.orig	2019-04-30 09:38:52 UTC
+++ src/CImg.h
@@ -3046,7 +3046,7 @@ namespace cimg_library_suffixed {
 #endif
       X11_info():nb_wins(0),events_thread(0),display(0),
                  nb_bits(0),is_blue_first(false),is_shm_enabled(false),byte_order(false) {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         XInitThreads();
 #endif
         wins = new CImgDisplay*[1024];

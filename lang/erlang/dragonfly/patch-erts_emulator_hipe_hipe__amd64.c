--- erts/emulator/hipe/hipe_amd64.c.orig	2015-06-23 18:56:21 UTC
+++ erts/emulator/hipe/hipe_amd64.c
@@ -162,7 +162,7 @@ static int morecore(unsigned int alloc_b
 		     MAP_PRIVATE|MAP_ANONYMOUS
 #if defined(MAP_32BIT)
 		     |MAP_32BIT
-#elif defined(__FreeBSD__) || defined(__sun__)
+#elif defined(__FreeBSD__) || defined(__sun__) || defined(__DragonFly__)
 		     |MAP_FIXED
 #endif
 		     ,

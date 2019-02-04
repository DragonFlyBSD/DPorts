--- src/util/serialize.h.orig	2018-06-10 15:18:11 UTC
+++ src/util/serialize.h
@@ -32,7 +32,7 @@ with this program; if not, write to the
 		#define __BIG_ENDIAN 1
 	#elif defined(__MACH__) && defined(__APPLE__)
 		#include <machine/endian.h>
-	#elif defined(__FreeBSD__)
+	#elif defined(__FreeBSD__) || defined(__DragonFly__)
 		#include <sys/endian.h>
 	#else
 		#include <endian.h>

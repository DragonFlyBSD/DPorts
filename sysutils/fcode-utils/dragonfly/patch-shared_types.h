--- shared/types.h.intermediate	2019-05-13 07:30:56.000000000 +0000
+++ shared/types.h
@@ -39,7 +39,7 @@
  *
  **************************************************************************** */
 
-#if defined(__ppc__) && defined(__APPLE__) || defined (__FreeBSD__)
+#if defined(__ppc__) && defined(__APPLE__) || defined (__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 
 typedef int8_t s8;

--- include/CTPP2SysTypes.h.orig	2012-08-02 10:22:44.000000000 +0300
+++ include/CTPP2SysTypes.h
@@ -134,7 +134,7 @@ typedef CCHAR_8                   * CCHA
 typedef UCCHAR_8                  * UCCHAR_P;
 
 
-#elif defined(__FreeBSD__) || defined(__APPLE__) /* Linux End, start of FreeBSD / Mac OS declarations */
+#elif defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__) /* Linux End, start of FreeBSD / Mac OS declarations */
 
 /**
   @var typedef int16_t    INT_16

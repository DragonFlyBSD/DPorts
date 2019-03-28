--- callMail.c.intermediate	2019-03-20 07:40:44 UTC
+++ callMail.c
@@ -38,10 +38,14 @@
 #include	<sys/select.h>
 #endif
 
-#if	!(defined(SYSV) || defined(linux) || defined(__FreeBSD__)) || defined(clipper)
+#if	!(defined(SYSV) || defined(linux) || defined(__FreeBSD__) || defined(__DragonFly__)) || defined(clipper)
 #include	<sgtty.h>
 #else
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include	<sys/termios.h>
+#else
+#include	<termios.h>
+#endif
 #include	<fcntl.h>
 #if	defined(att)
 #include	<sys/stropts.h>
@@ -206,7 +210,7 @@ void
 callMail(argv)
 char *argv[];
 {
-#if defined(linux) || defined(__FreeBSD__) || (defined(SYSV) && !defined(clipper))
+#if defined(linux) || defined(__FreeBSD__) || defined(__DragonFly__) || (defined(SYSV) && !defined(clipper))
  struct termios	tio;
 #else	
  struct sgttyb	Sgtty;
@@ -222,7 +226,7 @@ char *argv[];
 /*
 ** Set minimal requirements for slave connection (no echo, no NL->CR, keep TABS)
 */
-#if defined(linux) || defined(__FreeBSD__) || (defined(SYSV) && !defined(clipper))
+#if defined(linux) || defined(__FreeBSD__) || defined(__DragonFly__) || (defined(SYSV) && !defined(clipper))
  tcgetattr(slave, &tio);
  tio.c_oflag &= ~(OCRNL|ONLCR|ONLRET|OXTABS);
  tio.c_iflag &= ~IXOFF;

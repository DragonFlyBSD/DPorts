--- bas6.c.intermediate	2016-07-12 17:54:37 UTC
+++ bas6.c
@@ -162,7 +162,7 @@ int	fp;
  *    written at the same time
  */
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 long	lseek();
 	/* To phil C		phil@gmrs.isar.de
 	   From Julian S	jhs@freebsd.org

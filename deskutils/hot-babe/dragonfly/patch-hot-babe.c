--- hot-babe.c.orig	2004-12-06 00:59:38.000000000 +0200
+++ hot-babe.c
@@ -19,7 +19,7 @@
 #include <unistd.h>
 #include <stdlib.h>
 #include <string.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/time.h>
 #include <sys/resource.h>
 #include <sys/types.h>
@@ -93,7 +93,7 @@ static int system_cpu(void)
   u_int64_t     ab, ac, ad, ae;
   FILE         *stat;
 #endif
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   long load, total, oload, ototal;
   long ab, ac, ad, ae;
   long cp_time[CPUSTATES];
@@ -105,7 +105,7 @@ static int system_cpu(void)
   fscanf(stat, "%*s %Ld %Ld %Ld %Ld", &ab, &ac, &ad, &ae);
   fclose(stat);
 #endif
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   if (sysctlbyname("kern.cp_time", &cp_time, &len, NULL, 0) < 0)
     (void)fprintf(stderr, "Cannot get kern.cp_time");
 

--- mri_nwarp.c.orig	2020-08-10 17:42:08 UTC
+++ mri_nwarp.c
@@ -87,7 +87,7 @@ static char * wans(void)
 # define MEMORY_CHECK(mm)  show_malloc_stats(mm) ;
 # define MEMORY_SHORT     "\0"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) && !defined(__DragonFly__)
   #include <stdlib.h>
   #include <malloc_np.h>
 #endif
@@ -97,7 +97,7 @@ static void show_malloc_stats(char *mesg
 #if defined(__linux__)
       INFO_message("Memory usage: %s",mesg) ;
       malloc_stats();
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) && !defined(__DragonFly__)
       INFO_message("Memory usage: %s",mesg) ;
       malloc_stats_print(NULL, NULL, "g");
 #endif

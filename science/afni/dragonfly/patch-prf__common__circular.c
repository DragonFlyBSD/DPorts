--- prf_common_circular.c.intermediate	2019-06-02 20:10:02.000000000 +0000
+++ prf_common_circular.c
@@ -320,7 +320,7 @@ static int show_malloc_stats(char * mesg
       fprintf(stderr,"\n----- malloc stats: %s\n", mesg);
 #if defined(__linux__)
       malloc_stats();
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) && !defined(__DragonFly__)
       #include <stdlib.h>
       #include <malloc_np.h>
       malloc_stats_print(NULL, NULL, "g");

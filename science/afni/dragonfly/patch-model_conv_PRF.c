--- model_conv_PRF.c.orig	2015-11-06 23:25:08.000000000 +0200
+++ model_conv_PRF.c
@@ -306,7 +306,7 @@ static int show_malloc_stats(char * mesg
 
    if( show_stats ) {
       fprintf(stderr,"\n----- malloc stats: %s\n", mesg);
-#ifndef DARWIN
+#if !defined(DARWIN) && !defined(__DragonFly__)
       malloc_stats();
 #endif
    }

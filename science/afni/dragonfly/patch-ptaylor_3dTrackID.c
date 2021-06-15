--- ptaylor/3dTrackID.c.orig	2021-06-15 11:50:25.170849000 +0200
+++ ptaylor/3dTrackID.c	2021-06-15 12:00:00.057870000 +0200
@@ -2476,7 +2476,14 @@
          prefix_det[i] = calloc( THD_MAX_NAME,sizeof(char)); 
 
       if( opts.OUTPUT_TRK)
-         fout0 = (FILE **)calloc(N_nets, sizeof(FILE)); 
+#ifdef __DragonFly__
+        {
+         typedef struct __FILE_public zFILE;
+         fout0 = (FILE **)calloc(N_nets, sizeof(zFILE));
+        }
+#else
+         fout0 = (FILE **)calloc(N_nets, sizeof(FILE));
+#endif
 
       if(  (prefix_det == NULL) 
            || (tb == NULL) || (tt == NULL) || (id == NULL) 

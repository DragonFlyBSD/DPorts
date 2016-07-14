--- ptaylor/3dTrackID.c.orig	2015-11-06 23:25:15.000000000 +0200
+++ ptaylor/3dTrackID.c
@@ -2802,7 +2802,14 @@ int RunTrackingMaestro( int comline, TRA
          prefix_det[i] = calloc( 300,sizeof(char)); 
 
       if( opts.OUTPUT_TRK)
+#ifdef __DragonFly__
+        {
+         typedef struct __FILE_public zFILE;
+         fout0 = (FILE **)calloc(N_nets, sizeof(zFILE));
+        }
+#else
          fout0 = (FILE **)calloc(N_nets, sizeof(FILE)); 
+#endif
 
       if(  (prefix_det == NULL) || (flTtot == NULL) 
            || (tb == NULL) || (tt == NULL) || (id == NULL) 

--- stream/tvi_bsdbt848.c.intermediate	2018-08-30 02:07:16 UTC
+++ stream/tvi_bsdbt848.c
@@ -125,7 +125,9 @@ typedef struct priv {
     int maxheight;
     int maxwidth;
     struct meteor_geomet geom;
+#ifndef __DragonFly__
     struct meteor_capframe capframe;
+#endif
 
 /* Frame Buffer */
 

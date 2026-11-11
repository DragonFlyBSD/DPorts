--- src/g80_display.c.orig
+++ src/g80_display.c
@@ -224,7 +224,7 @@
         pNv->reg[(0x00614104+headOff)/4] = lo;
         pNv->reg[(0x00614108+headOff)/4] = hi;
     } else {
-        int n, m, pl;
+        int n = 0, m = 0, pl = 0;
         CARD32 r = pNv->reg[(0x00614104+headOff)/4];
 
         pNv->reg[(0x00614100+headOff)/4] = 0x50000610;

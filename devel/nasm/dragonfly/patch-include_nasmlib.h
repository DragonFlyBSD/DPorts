--- include/nasmlib.h.orig	2017-11-29 19:44:08.000000000 +0000
+++ include/nasmlib.h
@@ -191,7 +191,7 @@ int64_t readstrnum(char *str, int length
  * seg_init: Initialise the segment-number allocator.
  * seg_alloc: allocate a hitherto unused segment number.
  */
-void pure_func seg_init(void);
+void seg_init(void);
 int32_t pure_func seg_alloc(void);
 
 /*

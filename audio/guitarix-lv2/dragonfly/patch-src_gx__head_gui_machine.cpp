--- src/gx_head/gui/machine.cpp.intermediate	2019-05-07 19:48:35.000000000 +0000
+++ src/gx_head/gui/machine.cpp
@@ -29,7 +29,7 @@
 #include <bluetooth/rfcomm.h>
 #endif
 
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <malloc.h>
 
 void set_memory_allocation() {
@@ -48,7 +48,7 @@ void set_memory_allocation() {}
 #endif
 
 void lock_rt_memory() {
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
     extern char __rt_text__start[], __rt_text__end[];
     extern char __rt_data__start[], __rt_data__end[];
     struct {

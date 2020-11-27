--- HelperFunctions.c.intermediate	2020-11-27 13:54:17.000000000 +0000
+++ HelperFunctions.c
@@ -845,7 +845,7 @@ int strcmp_number(char * s1, char * s2)
 
 int mac_str(char * str_buff)
 {
-#if defined(__FreeBSD__) || defined(__MINGW32__)
+#if defined(__FreeBSD__) || defined(__MINGW32__) || defined(__DragonFly__)
 	return 1;
 #else
 #ifdef MACOS
@@ -2703,7 +2703,7 @@ void main(){
 
 int get_free_total_mem(size_t * total, size_t * free_mem){
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     return -1;
 #endif
 

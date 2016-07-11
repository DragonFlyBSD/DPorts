--- Libs/C/rct.c.orig	2012-12-19 18:46:05.000000000 +0200
+++ Libs/C/rct.c
@@ -36,7 +36,7 @@ int     rct_find_nxt_bricks(rct_brick_li
     debug_printf("Finding bricks...\n");
     if ( rct_find_nxt_usb(bricks) == 0 )
 	puts("No bricks found on USB interface.");
-#if defined(__FreeBSD__) || defined(__linux__)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__linux__)
     if ( bricks->count == 0 )
 	rct_find_nxt_bluetooth(bricks,name);
 #endif
@@ -90,7 +90,7 @@ int     rct_find_nxt_usb(rct_brick_list_
 int     rct_find_nxt_bluetooth(rct_brick_list_t *bricks,char *name)
 
 {
-#if defined(__FreeBSD__) || defined(__Linux__)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__Linux__)
     int     count = 0;
     struct hostent *host;
     char    *bt_env;

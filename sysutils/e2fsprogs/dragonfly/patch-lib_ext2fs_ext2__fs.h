--- ./lib/ext2fs/ext2_fs.h.intermediate	2012-12-31 20:52:39.714946000 +0100
+++ ./lib/ext2fs/ext2_fs.h	2012-12-31 20:53:12.284991000 +0100
@@ -456,7 +456,8 @@
 
 #define i_dir_acl	i_size_high
 
-#if defined(__KERNEL__) || defined(__linux__) || defined(__FreeBSD__)
+#if defined(__KERNEL__) || defined(__linux__) || defined(__FreeBSD__) \
+ || defined(__DragonFly__)
 #define i_reserved1	osd1.linux1.l_i_reserved1
 #define i_frag		osd2.linux2.l_i_frag
 #define i_fsize		osd2.linux2.l_i_fsize

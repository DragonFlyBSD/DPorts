--- ./lib/ext2fs/ext2_fs.h.intermediate	2014-02-09 16:29:26.915533000 +0000
+++ ./lib/ext2fs/ext2_fs.h
@@ -657,7 +657,7 @@ struct ext2_super_block {
 #define EXT2_OS_LINUX		0
 #define EXT2_OS_HURD		1
 #define EXT2_OBSO_OS_MASIX	2
-#define EXT2_OS_FREEBSD		3
+#define EXT2_OS_BSD		3
 #define EXT2_OS_LITES		4
 
 /*

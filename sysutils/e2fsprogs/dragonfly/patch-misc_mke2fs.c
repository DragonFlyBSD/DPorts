--- ./misc/mke2fs.c.intermediate	2014-02-09 16:29:27.105527000 +0000
+++ ./misc/mke2fs.c
@@ -642,7 +642,13 @@ static int set_os(struct ext2_super_bloc
 	else if (strcasecmp(os, "GNU") == 0 || strcasecmp(os, "hurd") == 0)
 		sb->s_creator_os = EXT2_OS_HURD;
 	else if (strcasecmp(os, "freebsd") == 0)
-		sb->s_creator_os = EXT2_OS_FREEBSD;
+		sb->s_creator_os = EXT2_OS_BSD;
+	else if (strcasecmp(os, "netbsd") == 0)
+		sb->s_creator_os = EXT2_OS_BSD;
+	else if (strcasecmp(os, "openbsd") == 0)
+		sb->s_creator_os = EXT2_OS_BSD;
+	else if (strcasecmp(os, "dragonfly") == 0)
+		sb->s_creator_os = EXT2_OS_BSD;
 	else if (strcasecmp(os, "lites") == 0)
 		sb->s_creator_os = EXT2_OS_LITES;
 	else

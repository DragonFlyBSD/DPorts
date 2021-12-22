--- dirs.c.orig	2021-10-15 08:04:31 UTC
+++ dirs.c
@@ -128,7 +128,9 @@ scandir_fd(int fd, struct dirent ***name
 
 		p->d_ino = d->d_ino;
 		p->d_type = d->d_type;
+#ifndef __DragonFly__
 		p->d_reclen = d->d_reclen;
+#endif
 		memcpy(p->d_name, d->d_name, namlen + 1);
 		names[nitems++] = p;
 	}

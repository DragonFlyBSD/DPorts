--- src/lib/eina/eina_file_posix.c.orig	Sat Dec 23 15:56:36 2023
+++ src/lib/eina/eina_file_posix.c	Thu Mar
@@ -1312,6 +1312,16 @@ typedef struct
    unsigned char  d_type;
    char           d_name[4096];
 } Dirent;
+#elif defined(__DragonFly__)
+# define do_getdents(fd, buf, size) getdents(fd, buf, size)
+typedef struct
+{
+        ino_t           d_ino;       /* file number of entry */
+        __uint16_t      d_namlen;       /* strlen(d_name) */
+        __uint8_t       d_type;         /* file type, see blow */
+        char            d_name[4096];
+                                        /* name, NUL-terminated */
+} Dirent;
 #endif
 
 EINA_API void
@@ -1322,7 +1332,7 @@ eina_file_close_from(int fd, int *except_fd)
 #else
 #ifdef HAVE_DIRENT_H
 //# if 0
-# if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__linux__)
+# if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__linux__) || defined(__DragonFly__)
    int dirfd;
    Dirent *d;
    char buf[4096 + 128];
@@ -1355,7 +1365,11 @@ skip:
                }
              d = (Dirent *)(buf + pos);
              fname = d->d_name;
+#ifndef __DragonFly__
              pos += d->d_reclen;
+#else
+	     pos += _DIRENT_RECLEN(d->d_namlen);
+#endif
              if (pos >= ret) do_read = EINA_TRUE;
              if (!((fname[0] >= '0') && (fname[0] <= '9'))) continue;
              num = atoi(fname);
@@ -1389,7 +1403,11 @@ skip2:
                     }
                   d = (Dirent *)(buf + pos);
                   fname = d->d_name;
-                  pos += d->d_reclen;
+#ifndef __DragonFly__
+		  pos += d->d_reclen;
+#else
+		  pos += _DIRENT_RECLEN(d->d_namlen);
+#endif
                   if (pos >= ret) do_read = EINA_TRUE;
                   if (!((fname[0] >= '0') && (fname[0] <= '9'))) continue;
                   num = atoi(fname);

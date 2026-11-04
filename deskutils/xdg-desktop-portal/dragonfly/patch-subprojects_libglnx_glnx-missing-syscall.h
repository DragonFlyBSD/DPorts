--- subprojects/libglnx/glnx-missing-syscall.h.orig
+++ subprojects/libglnx/glnx-missing-syscall.h
@@ -35,6 +35,29 @@
 #include <glib.h>
 #include <stdint.h>
 
+#ifdef __DragonFly__
+/* None of the Linux syscall numbers below means the same call on
+ * DragonFly: fail them all with ENOSYS, which every caller handles.
+ * statx is emulated with fstatat further down. */
+#include <errno.h>
+#include <string.h>
+#include <sys/stat.h>
+#include <sys/types.h>
+typedef off_t loff_t;
+#ifndef AT_EMPTY_PATH
+#define AT_EMPTY_PATH 0x10000
+#endif
+#ifndef IFTODT
+#define IFTODT(mode) (((mode) & 0170000) >> 12)
+#endif
+#ifndef strdupa
+#define strdupa(s) __extension__ ({ const char *__s = (s); \
+  size_t __n = strlen (__s) + 1; \
+  (char *) memcpy (__builtin_alloca (__n), __s, __n); })
+#endif
+#define syscall(...) (errno = ENOSYS, -1)
+#endif
+
 #if !HAVE_DECL_RENAMEAT2
 #  ifndef __NR_renameat2
 #    if defined __x86_64__
@@ -377,9 +400,45 @@
                     unsigned int       mask,
                     struct glnx_statx *buf)
 {
+#ifdef __DragonFly__
+  /* There are no mount ids: st_dev identifies the mounted filesystem. */
+  struct stat st;
+  int r;
+
+  if ((flags & AT_EMPTY_PATH) && filename[0] == '\0')
+    r = dfd == AT_FDCWD ? stat (".", &st) : fstat (dfd, &st);
+  else
+    r = fstatat (dfd, filename, &st, flags & AT_SYMLINK_NOFOLLOW);
+  if (r != 0)
+    return r;
+
+  memset (buf, 0, sizeof (*buf));
+  buf->stx_mask = GLNX_STATX_BASIC_STATS | GLNX_STATX_MNT_ID;
+  buf->stx_blksize = st.st_blksize;
+  buf->stx_nlink = st.st_nlink;
+  buf->stx_uid = st.st_uid;
+  buf->stx_gid = st.st_gid;
+  buf->stx_mode = st.st_mode;
+  buf->stx_ino = st.st_ino;
+  buf->stx_size = st.st_size;
+  buf->stx_blocks = st.st_blocks;
+  buf->stx_atime.tv_sec = st.st_atim.tv_sec;
+  buf->stx_atime.tv_nsec = st.st_atim.tv_nsec;
+  buf->stx_mtime.tv_sec = st.st_mtim.tv_sec;
+  buf->stx_mtime.tv_nsec = st.st_mtim.tv_nsec;
+  buf->stx_ctime.tv_sec = st.st_ctim.tv_sec;
+  buf->stx_ctime.tv_nsec = st.st_ctim.tv_nsec;
+  buf->stx_rdev_major = major (st.st_rdev);
+  buf->stx_rdev_minor = minor (st.st_rdev);
+  buf->stx_dev_major = major (st.st_dev);
+  buf->stx_dev_minor = minor (st.st_dev);
+  buf->stx_mnt_id = st.st_dev;
+  return 0;
+#else
 	memset (buf, 0xbf, sizeof (*buf));
 	return syscall (__NR_statx, dfd, filename, flags, mask, buf);
   return 0;
+#endif
 }
 
 #define HAVE_GLNX_STATX
@@ -688,3 +747,7 @@
 }
 
 #endif
+
+#ifdef __DragonFly__
+#undef syscall
+#endif

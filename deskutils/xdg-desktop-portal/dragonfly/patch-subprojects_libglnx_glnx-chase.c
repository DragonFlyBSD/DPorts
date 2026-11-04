--- subprojects/libglnx/glnx-chase.c.orig
+++ subprojects/libglnx/glnx-chase.c
@@ -33,6 +33,12 @@
 #define AT_NO_AUTOMOUNT 0
 #endif
 
+#ifndef O_PATH
+/* DragonFly has no O_PATH: a read-only fd serves for fstat and *at(), but
+ * cannot point at a symlink, so chase_manual reads links via the parent. */
+#define O_PATH O_NONBLOCK
+#endif
+
 #define AUTOFS_SUPER_MAGIC 0x0187 /* man fstatfs */
 
 #define GLNX_CHASE_DEBUG_NO_OPENAT2 (1U << 31)
@@ -477,8 +483,21 @@
                * and stay there, just like the kernel does. */
               continue;
             }
+        }
+
+#ifdef __DragonFly__
+      struct stat lst;
+      gboolean is_link = fstatat (fd, segment, &lst, AT_SYMLINK_NOFOLLOW) == 0 &&
+                         S_ISLNK (lst.st_mode);
+
+      if (is_link && is_last && (flags & GLNX_CHASE_NOFOLLOW) != 0)
+        {
+          errno = ELOOP;
+          return glnx_fd_throw_errno_prefix (error, "cannot open a symlink without O_PATH");
         }
 
+      if (!is_link)
+#endif
       {
         /* Open the next segment. We always use GLNX_CHASE_NOFOLLOW here to be
          * able to ensure the RESOLVE flags, and automount behavior. */
@@ -507,6 +526,11 @@
           }
       }
 
+#ifdef __DragonFly__
+      if (is_link)
+        st.stx_mode = lst.st_mode;
+      else
+#endif
       if (!glnx_chase_statx (next_fd, no_automount, &st, error))
         return -1;
 
@@ -527,8 +551,12 @@
               return glnx_fd_throw_errno_prefix (error, "followed too many symlinks");
             }
 
+#ifdef __DragonFly__
+          link = glnx_readlinkat_malloc (fd, segment, NULL, error);
+#else
           /* AT_EMPTY_PATH is implied for readlinkat */
           link = glnx_readlinkat_malloc (next_fd, "", NULL, error);
+#endif
           if (!link)
             return -1;
 

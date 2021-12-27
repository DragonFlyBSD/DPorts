--- libcork/src/libcork/posix/env.c.intermediate	2021-12-27 11:06:11.000000000 +0000
+++ libcork/src/libcork/posix/env.c
@@ -195,7 +195,7 @@ cork_env_set_vars(void *user_data, struc
  * [1] http://www.gnu.org/software/gnulib/manual/html_node/clearenv.html
  */
 
-#if (defined(__FreeBSD__) && (__FreeBSD__ < 14))
+#if (defined(__FreeBSD__) && (__FreeBSD__ < 14)) && !defined(__DragonFly__)
 /* Since FreeBSD 14.0-CURRENT, the clearenv(3) function was added to stdlib.
  * See https://reviews.freebsd.org/R10:597b02675751e48dd04777f1e91fee382bf3a966
  */

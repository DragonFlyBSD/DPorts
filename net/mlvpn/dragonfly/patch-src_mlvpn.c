--- src/mlvpn.c.intermediate	2019-12-29 13:46:44.000000000 +0000
+++ src/mlvpn.c
@@ -821,7 +821,7 @@ mlvpn_rtun_start(mlvpn_tunnel_t *t)
             log_warn(NULL, "%s socket creation error",
                 t->name);
         } else {
-#if defined(HAVE_FREEBSD) || defined(HAVE_OPENBSD)
+#if (defined(HAVE_FREEBSD) || defined(HAVE_OPENBSD)) && !defined(__DragonFly__)
 			/* Setting SO_SETFIB (fib) supported on FreeBSD and OpenBSD only */
 			if (setsockopt(fd, SOL_SOCKET, SO_SETFIB, &fib, sizeof(fib)) < 0)
 			{

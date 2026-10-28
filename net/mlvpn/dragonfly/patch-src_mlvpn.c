--- src/mlvpn.c.orig
+++ src/mlvpn.c
@@ -809,7 +809,7 @@
     int ret, fd = -1;
     char *addr, *port;
     struct addrinfo hints, *res;
-#if defined(HAVE_FREEBSD) || defined(HAVE_OPENBSD)
+#if (defined(HAVE_FREEBSD) || defined(HAVE_OPENBSD)) && !defined(__DragonFly__)
     int fib = t->bindfib;
 #endif
     fd = t->fd;
@@ -847,7 +847,7 @@
                 t->name);
         } else {
             /* Setting fib/routing-table is supported on FreeBSD and OpenBSD only */
-#if defined(HAVE_FREEBSD) || defined(HAVE_OPENBSD)
+#if (defined(HAVE_FREEBSD) || defined(HAVE_OPENBSD)) && !defined(__DragonFly__)
             if (fib > 0)
             {
 #if defined(HAVE_FREEBSD)

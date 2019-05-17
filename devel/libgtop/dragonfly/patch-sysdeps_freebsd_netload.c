--- sysdeps/freebsd/netload.c.orig	2016-11-27 18:05:03 UTC
+++ sysdeps/freebsd/netload.c
@@ -108,7 +108,11 @@ glibtop_get_netload_p (glibtop *server,
                         memset(&ifmr, 0, sizeof(ifmr));
                         (void)strlcpy(ifmr.ifm_name, ifa->ifa_name,
                                 sizeof(ifmr.ifm_name));
+#ifdef __DragonFly__
+                        if (
+#else
                         if (ioctl(s, SIOCGIFXMEDIA, (caddr_t)&ifmr) < 0 &&
+#endif
                             ioctl(s, SIOCGIFMEDIA, (caddr_t)&ifmr) < 0) {
                                 glibtop_warn_io_r(server, "ioctl(SIOCGIFMEDIA)");
                         } else {

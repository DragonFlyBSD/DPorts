--- src/vdcomp.c.orig
+++ src/vdcomp.c
@@ -124,6 +124,7 @@
       !defined(__bsdi__)                  && \
       !defined(__386BSD__)                && \
       !defined(__FreeBSD__)               && \
+      !defined(__DragonFly__)             && \
       !defined(__OpenBSD__)               && \
       !defined(__NetBSD__)                && \
       !defined(__DARWIN__)

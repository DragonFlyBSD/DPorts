--- vdcomp.c.intermediate	2015-11-11 11:50:16 UTC
+++ vdcomp.c
@@ -116,6 +116,7 @@
       !defined(__bsd43)                   && \
       !defined(__bsdi__)                  && \
       !defined(__386BSD__)                && \
+      !defined(__DragonFly__)             && \
       !defined(__FreeBSD__)               && \
       !defined(__OpenBSD__)               && \
       !defined(__NetBSD__)                && \

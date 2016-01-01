--- mount/freebsd-mounts-7.c.intermediate	2016-01-01 14:57:18.000000000 +0200
+++ mount/freebsd-mounts-7.c
@@ -45,7 +45,9 @@ if (f & MNT_ASYNC) strcat(buf, "async,")
 if (f & MNT_QUOTA) strcat(buf, "quota,");
 if (f & MNT_NOSYMFOLLOW) strcat(buf, "nosymfollow,");
 if (f & MNT_SUIDDIR) strcat(buf, "suiddir,");
+#ifdef MNT_UNION
 if (f & MNT_UNION) strcat(buf, "union,");
+#endif
 if (f & MNT_NOCLUSTERR) strcat(buf, "noclusterr,");
 if (f & MNT_NOCLUSTERW) strcat(buf, "noclusterw,");
 if (buf[0] == 0) return "-";

--- source4/heimdal/lib/krb5/krb5_locl.h.orig	2019-12-06 10:10:30 UTC
+++ source4/heimdal/lib/krb5/krb5_locl.h
@@ -198,6 +198,10 @@ struct _krb5_krb_auth_data;
 #define PATH_SEP ":"
 #endif
 
+#ifndef SYSCONFDIR
+#define	SYSCONFDIR	"/etc"
+#endif
+
 /* should this be public? */
 #define KEYTAB_DEFAULT "FILE:" SYSCONFDIR "/krb5.keytab"
 #define KEYTAB_DEFAULT_MODIFY "FILE:" SYSCONFDIR "/krb5.keytab"

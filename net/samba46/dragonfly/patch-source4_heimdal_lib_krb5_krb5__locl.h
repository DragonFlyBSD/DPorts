--- source4/heimdal/lib/krb5/krb5_locl.h.orig	2012-10-02 08:24:47.000000000 +0000
+++ source4/heimdal/lib/krb5/krb5_locl.h
@@ -199,11 +199,11 @@ struct _krb5_krb_auth_data;
 #endif
 
 /* should this be public? */
-#define KEYTAB_DEFAULT "FILE:" SYSCONFDIR "/krb5.keytab"
-#define KEYTAB_DEFAULT_MODIFY "FILE:" SYSCONFDIR "/krb5.keytab"
+#define KEYTAB_DEFAULT "FILE:/etc/krb5.keytab"
+#define KEYTAB_DEFAULT_MODIFY "FILE:/etc/krb5.keytab"
 
 
-#define MODULI_FILE SYSCONFDIR "/krb5.moduli"
+#define MODULI_FILE "/etc/krb5.moduli"
 
 #ifndef O_BINARY
 #define O_BINARY 0

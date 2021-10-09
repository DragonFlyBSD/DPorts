--- crypto/x509/x509_vpm.c.orig	2021-05-02 01:15:47 UTC
+++ crypto/x509/x509_vpm.c
@@ -598,6 +598,7 @@ static const X509_VERIFY_PARAM_ID _empty
 static const X509_VERIFY_PARAM default_table[] = {
 	{
 		.name = "default",
+		.flags = X509_V_FLAG_TRUSTED_FIRST,
 		.depth = 100,
 		.trust = 0,  /* XXX This is not the default trust value */
 		.id = vpm_empty_id

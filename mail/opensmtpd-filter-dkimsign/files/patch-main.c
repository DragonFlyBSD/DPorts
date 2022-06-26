--- main.c.orig	2020-09-08 16:12:24 UTC
+++ main.c
@@ -187,8 +187,10 @@ main(int argc, char *argv[])
 	if ((hash_md = EVP_get_digestbyname(hashalg)) == NULL)
 		osmtpd_errx(1, "Can't find hash: %s", hashalg);
 
+#if !(defined(__FreeBSD__) || defined(__DragonFly__))
 	if (pledge("tmppath stdio", NULL) == -1)
 		osmtpd_err(1, "pledge");
+#endif
 
 	if (domain == NULL || selector == NULL || pkey == NULL)
 		usage();

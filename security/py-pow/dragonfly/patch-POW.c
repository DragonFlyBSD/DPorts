To avoid:
POW.c:2428:1: error: static declaration of 'X509_REVOKED_dup' follows non-static declaration
 X509_REVOKED_dup(X509_REVOKED *rev)
 ^
In file included from POW.c:42:0:
/usr/include/openssl/x509.h:751:15: note: previous declaration of 'X509_REVOKED_dup' was here
 X509_REVOKED *X509_REVOKED_dup(X509_REVOKED *rev);

--- POW.c.intermediate	2016-08-05 15:22:37 UTC
+++ POW.c
@@ -2425,7 +2425,7 @@ static char x509_crl_object_set_revoked_
 
 // added because we don't already have one!
 static X509_REVOKED *
-X509_REVOKED_dup(X509_REVOKED *rev)
+X509_REVOKED_dup_dfly(X509_REVOKED *rev)
 {
    return((X509_REVOKED *)ASN1_dup((int (*)())i2d_X509_REVOKED,
       (void *)d2i_X509_REVOKED,(char *)rev));
@@ -2457,7 +2457,7 @@ x509_crl_object_set_revoked(x509_crl_obj
       if ( !X_X509_revoked_Check( revoked ) )
          { PyErr_SetString( PyExc_TypeError, "inapropriate type" ); goto error; }
 
-      if ( !(tmp_revoked = X509_REVOKED_dup( revoked->revoked ) ) )
+      if ( !(tmp_revoked = X509_REVOKED_dup_dfly( revoked->revoked ) ) )
          { PyErr_SetString( SSLErrorObject, "could not allocate memory" ); goto error; }
 
       if (!sk_X509_REVOKED_push( revoked_stack, tmp_revoked ) )

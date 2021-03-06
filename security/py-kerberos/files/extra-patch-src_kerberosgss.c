--- src/kerberosgss.c.orig	2016-01-25 17:51:33 UTC
+++ src/kerberosgss.c
@@ -43,7 +43,7 @@ char* server_principal_details(const cha
     int code;
     krb5_context kcontext;
     krb5_keytab kt = NULL;
-    krb5_kt_cursor cursor = NULL;
+    krb5_kt_cursor cursor;
     krb5_keytab_entry entry;
     char* pname = NULL;
     
@@ -98,13 +98,13 @@ char* server_principal_details(const cha
                 goto end;
             }
             strcpy(result, pname);
-            krb5_free_unparsed_name(kcontext, pname);
-            krb5_free_keytab_entry_contents(kcontext, &entry);
+            krb5_xfree(pname);
+            krb5_kt_free_entry(kcontext, &entry);
             break;
         }
         
-        krb5_free_unparsed_name(kcontext, pname);
-        krb5_free_keytab_entry_contents(kcontext, &entry);
+        krb5_xfree(pname);
+        krb5_kt_free_entry(kcontext, &entry);
     }
     
     if (result == NULL) {
@@ -115,9 +115,7 @@ char* server_principal_details(const cha
     }
     
 end:
-    if (cursor) {
-        krb5_kt_end_seq_get(kcontext, kt, &cursor);
-    }
+    krb5_kt_end_seq_get(kcontext, kt, &cursor);
     if (kt) {
         krb5_kt_close(kcontext, kt);
     }
@@ -150,7 +148,7 @@ int authenticate_gss_client_init(
     name_token.value = (char *)service;
     
     maj_stat = gss_import_name(
-        &min_stat, &name_token, gss_krb5_nt_service_name, &state->server_name
+        &min_stat, &name_token, GSS_C_NT_HOSTBASED_SERVICE, &state->server_name
     );
     
     if (GSS_ERROR(maj_stat)) {

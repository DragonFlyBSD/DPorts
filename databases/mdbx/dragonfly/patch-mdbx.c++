--- mdbx.c++.orig	2021-02-02 23:12:18 UTC
+++ mdbx.c++
@@ -3438,7 +3438,9 @@ __cold void error::throw_exception() con
     CASE_EXCEPTION(max_maps_reached, MDBX_DBS_FULL);
     CASE_EXCEPTION(max_readers_reached, MDBX_READERS_FULL);
     CASE_EXCEPTION(multivalue, MDBX_EMULTIVAL);
+#if !defined(__DragonFly__) && !defined(ENODATA)
     CASE_EXCEPTION(no_data, MDBX_ENODATA);
+#endif
     CASE_EXCEPTION(not_found, MDBX_NOTFOUND);
     CASE_EXCEPTION(operation_not_permitted, MDBX_EPERM);
     CASE_EXCEPTION(permission_denied_or_not_writeable, MDBX_EACCESS);

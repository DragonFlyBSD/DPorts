
$FreeBSD: ports/lang/erlang/files/patch-lib_odbc_c__src_odbcserver.c,v 1.2 2012/11/17 05:58:49 svnexp Exp $

--- lib/odbc/c_src/odbcserver.c.orig
+++ lib/odbc/c_src/odbcserver.c
@@ -1150,7 +1150,7 @@
 					   (column.type.strlen_or_indptr_array[j]));
 			break;
                 case SQL_C_SLONG:
-                    ei_x_encode_long(&dynamic_buffer(state), ((long*)values)[j]);
+                    ei_x_encode_long(&dynamic_buffer(state), ((SQLINTEGER*)values)[j]);
                     break;
                 case SQL_C_DOUBLE:
                     ei_x_encode_double(&dynamic_buffer(state),

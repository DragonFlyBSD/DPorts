--- databases/backends/mysql.py.orig	2022-11-07 11:16:46 UTC
+++ databases/backends/mysql.py
@@ -211,6 +211,7 @@ class MySQLConnection(ConnectionBackend)
                 compiled._result_columns,
                 compiled._ordered_columns,
                 compiled._textual_ordered_columns,
+                compiled._ad_hoc_textual,
                 compiled._loose_column_name_matching,
             )
         else:


$FreeBSD: head/www/trac-downloads/files/patch-tracdownloads_consoleadmin.py 340725 2014-01-22 17:40:44Z mat $

--- tracdownloads/consoleadmin.py.orig
+++ tracdownloads/consoleadmin.py
@@ -122,7 +122,8 @@
         self.log.debug(download)
 
         # Upload file to DB and file storage.
-        api.store_download(context, download, file)
+        api._add_download(context, download, file)
+
 
         # Close input file and commit changes in DB.
         file.close()

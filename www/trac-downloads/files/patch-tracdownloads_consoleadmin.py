
$FreeBSD: ports/www/trac-downloads/files/patch-tracdownloads_consoleadmin.py,v 1.2 2012/11/17 06:03:08 svnexp Exp $

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

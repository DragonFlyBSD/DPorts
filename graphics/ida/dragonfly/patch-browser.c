--- browser.c.orig	2016-04-05 12:59:50.000000000 +0300
+++ browser.c
@@ -227,9 +227,12 @@ static Boolean browser_readdir(XtPointer
 			file->basename);
 	    }
 	}
+#ifndef __DragonFly__
 	if (file->d_type != DT_UNKNOWN) {
 	    file->st.st_mode = DTTOIF(file->d_type);
-	} else {
+	} else
+#endif
+	{
 	    if (-1 == stat(file->filename, &file->st)) {
 		fprintf(stderr,"stat %s: %s\n",
 			file->filename,strerror(errno));

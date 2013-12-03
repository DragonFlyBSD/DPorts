--- src/share/poudriere/html/assets/poudriere.js.orig	2013-11-26 00:24:06.000000000 +0000
+++ src/share/poudriere/html/assets/poudriere.js
@@ -22,7 +22,7 @@ function maxcatwidth(A, B, C, D, queued)
 	cat[1] = catwidth (B, queued);
 	cat[2] = catwidth (C, queued);
 	cat[3] = catwidth (D, queued);
-	cat.sort();
+	cat.sort(function(a,b){return a-b});
 	return (500 - cat[0] - cat[1] - cat[2]);
 }
 

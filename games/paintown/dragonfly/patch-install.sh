--- install.sh.orig	2011-10-16 17:33:08.000000000 +0000
+++ install.sh
@@ -26,10 +26,9 @@ data(){
 	fi
 
 	echo "Copying data to $dir"
-	mkdir -p $dir
+	mkdir -p $dir/data
 
-	find data -type d ! -regex '.*\.svn.*' -print0 | xargs -0 -I "{}" mkdir -p "$dir/{}"
-	find data -type f ! -regex '.*\.svn.*' -print0 | xargs -0 -I "{}" cp "{}" "$dir/{}"
+	cpdup -i0 -f data/ $dir/data/
 	cp paintown $dir/paintown-bin
 }
 

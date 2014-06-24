--- ostype.awk.intermediate	2014-06-24 12:35:59.576401000 +0000
+++ ostype.awk
@@ -12,6 +12,10 @@ $0 ~ /^SunOS.* Release 4\./ {
 	os = "sunos4"
 }
 
+$0 ~ /DragonFly/ {
+	os = "bsd"
+}
+
 $0 ~ /BSD / {
 	os = "bsd"
 }

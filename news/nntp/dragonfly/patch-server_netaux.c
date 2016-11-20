--- server/netaux.c.intermediate	2016-11-20 17:05:45.000000000 +0200
+++ server/netaux.c
@@ -265,7 +265,7 @@ set_timer()
  */
 
 void
-reaper()
+reaper(int a)
 {
 #ifndef USG
 #ifdef BSD_44

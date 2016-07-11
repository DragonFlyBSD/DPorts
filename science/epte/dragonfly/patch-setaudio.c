--- setaudio.c.intermediate	2016-07-10 11:17:09 UTC
+++ setaudio.c
@@ -312,7 +312,7 @@ void setaudio ( void )
 char File_Name[1024];
 char *file_name;
 
-#if defined(VMS) || defined(__FreeBSD__)
+#if defined(VMS) || defined(__FreeBSD__) || defined(__DragonFly__)
 #else
 
   /* The audio device sometimes does not work if it is left open for a long

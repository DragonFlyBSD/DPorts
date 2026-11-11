--- file.c.orig
+++ file.c
@@ -14,7 +14,7 @@
 static void         set_info_from_stat(const struct stat*const);
 
 /* ---- local variables ----------------------------------------------------- */
-static __dev_t      org_st_dev=0;          /* 読込みファイルのdevice-ID       */
+static dev_t        org_st_dev=0;          /* 読込みファイルのdevice-ID       */
 static ino_t        org_st_ino=0;          /* 読込みファイルのi-node No.      */
 static char         mode_string[11];       /* ファイルモード文字列            */
 static char         time_string[30];       /* ファイル時刻の文字列            */

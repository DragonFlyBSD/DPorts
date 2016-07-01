--- smbval/smblib-util.c.orig	2016-06-23 10:20:35.000000000 +0300
+++ smbval/smblib-util.c
@@ -32,6 +32,7 @@ int RFCNB_Free_Pkt(struct RFCNB_Pkt *pkt
 
 /* Print out an SMB pkt in all its gory detail ... */
 
+#ifndef __DragonFly__
 void SMB_Print_Pkt(FILE fd, RFCNB_Pkt *pkt, BOOL command, int Offset, int Len)
 
 {
@@ -48,6 +49,7 @@ void SMB_Print_Pkt(FILE fd, RFCNB_Pkt *p
   /* etc                                                 */
 
 }
+#endif
 
 /* Convert a DOS Date_Time to a local host type date time for printing */
 

--- dagrab.c.orig	2019-02-17 21:19:43.568638000 +0100
+++ dagrab.c	2019-02-17 21:20:38.849022000 +0100
@@ -250,7 +250,7 @@ void cd_read_audio(int lba,int num,char
 	  jitter correction may be required inside the block. */					   
 {
 /* CDIOCREADAUDIO has been removed in FreeBSD 5.1-CURRENT */
-#if defined (__FreeBSD__) &&  (__FreeBSD_version >= 501106)
+#if (defined (__FreeBSD__) &&  (__FreeBSD_version >= 501106)) || defined (__DragonFly__)
 	int bsize = 2352;
         if(ioctl(cdrom_fd,CDRIOCSETBLOCKSIZE,&bsize) == -1) {
 		fprintf(stderr, "setblocksize");

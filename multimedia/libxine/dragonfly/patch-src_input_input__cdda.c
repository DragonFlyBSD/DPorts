--- src/input/input_cdda.c~	2018-01-11 13:49:47.000000000 +0100
+++ src/input/input_cdda.c	2019-02-17 22:03:17.436801000 +0100
@@ -894,7 +894,7 @@ static int read_cdrom_frames(cdda_input_
 
   while( num_frames ) {
 #if defined(__FreeBSD_kernel__)
-#if __FreeBSD_kernel_version < 501106
+#if __FreeBSD_kernel_version < 501106 && !defined(__DragonFly__)
     struct ioc_read_audio cdda;
 
     cdda.address_format = CD_MSF_FORMAT;

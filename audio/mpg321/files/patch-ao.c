
$FreeBSD: ports/audio/mpg321/files/patch-ao.c,v 1.2 2012/11/17 05:54:39 svnexp Exp $

--- ao.c.orig
+++ ao.c
@@ -229,6 +229,7 @@
            and restore it afterwards */
         signal(SIGINT, SIG_DFL);
         
+        memset(&format, 0, sizeof(format)); 
         format.bits = 16;
         format.rate = header->samplerate;
         format.channels = (options.opt & MPG321_FORCE_STEREO) ? 2 : MAD_NCHANNELS(header);

--- src/FAL.cpp.intermediate	2020-02-20 10:57:15.000000000 +0000
+++ src/FAL.cpp
@@ -61,6 +61,10 @@ int FDtoBlockSize( int FD ){
 	int block_size=0;
 #if defined(__WXGTK__) && !defined(BSD)
 	ioctl(FD, BLKSSZGET, &block_size);
+#elif defined (__DragonFly__)
+	struct partinfo partinfo;
+	if (ioctl(FD, DIOCGPART, &partinfo) == 0)
+	    block_size = partinfo.media_blksize;
 #elif defined (__WXMAC__) || defined(BSD)
 	ioctl(FD, DKIOCGETBLOCKSIZE, &block_size);
 #elif defined (__WXMSW__)
@@ -81,6 +85,12 @@ uint64_t FDtoBlockCount( int FD ) {
 #if defined(__WXGTK__) && !defined(BSD)
 	ioctl(FD, BLKGETSIZE64, &block_count);
 	block_count/=FDtoBlockSize( FD );
+#elif defined (__DragonFly__)
+	struct partinfo partinfo;
+	if (ioctl(FD, DIOCGPART, &partinfo) == 0) {
+	    block_count = partinfo.media_size;
+	    block_count /= partinfo.media_blksize;
+	}
 #elif defined (__WXMAC__) || defined(BSD)
 	ioctl(FD, DKIOCGETBLOCKCOUNT, &block_count);
 #elif defined (__WXMSW__)

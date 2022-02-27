--- mkimg.c.orig	2021-12-18 20:26:54 UTC
+++ mkimg.c
@@ -48,6 +48,16 @@ __FBSDID("$FreeBSD$");
 #include "mkimg.h"
 #include "scheme.h"
 
+#ifndef TAILQ_FOREACH_FROM
+#define	TAILQ_FOREACH_FROM(var, head, field) \
+	for ((var) = ((var) ? (var) : TAILQ_FIRST((head))); (var); \
+		(var) = TAILQ_NEXT((var), field))
+#endif
+
+#ifdef __DragonFly__
+#define	expand_number	dehumanize_number
+#endif
+
 #define	LONGOPT_FORMATS		0x01000001
 #define	LONGOPT_SCHEMES		0x01000002
 #define	LONGOPT_VERSION		0x01000003
@@ -440,7 +450,7 @@ mkimg(void)
 	FILE *fp;
 	struct part *part;
 	lba_t block, blkoffset;
-	uint64_t bytesize, byteoffset;
+	off_t bytesize, byteoffset;
 	char *size, *offset;
 	bool abs_offset;
 	int error, fd;

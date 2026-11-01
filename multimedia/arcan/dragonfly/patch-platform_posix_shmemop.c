--- platform/posix/shmemop.c.orig
+++ platform/posix/shmemop.c
@@ -42,6 +42,31 @@
 	}
 	return fd;
 }
+#elif defined(__DragonFly__)
+#include <errno.h>
+#include <fcntl.h>
+#include <stdlib.h>
+
+/* No memfd_create: create a uniquely named shm object and unlink it
+ * right away, which leaves it anonymous like a memfd. */
+int platform_fsrv_shmmem()
+{
+	char name[] = "/shmif-XXXXXXXXXX";
+	for (int tries = 0; tries < 16; tries++){
+		uint8_t rnd[10];
+		arc4random_buf(rnd, sizeof(rnd));
+		for (size_t i = 0; i < sizeof(rnd); i++)
+			name[7 + i] = 'a' + rnd[i] % 26;
+		int fd = shm_open(name, O_RDWR | O_CREAT | O_EXCL | O_CLOEXEC, 0600);
+		if (-1 != fd){
+			shm_unlink(name);
+			return fd;
+		}
+		if (errno != EEXIST)
+			return -1;
+	}
+	return -1;
+}
 #else
 int platform_fsrv_shmmem()
 {

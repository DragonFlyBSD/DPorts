--- src/evdev.c.orig	2017-01-19 21:36:55 UTC
+++ src/evdev.c
@@ -1893,6 +1893,15 @@ evdev_device_dispatch(void *data)
 
 	if (rc != -EAGAIN && rc != -EINTR) {
 		libinput_remove_source(libinput, device->source);
+		/*
+		 * Dirty hack to allow cuse-based evdev backends to release
+		 * character device file when device has been detached
+		 * but still have it descriptor opened.
+		 * Issuing evdev_device_suspend() here leads to SIGSEGV
+		 */
+		int dummy_fd = open("/dev/null", O_RDONLY | O_CLOEXEC);
+		dup2(dummy_fd, device->fd);
+		close(dummy_fd);
 		device->source = NULL;
 	}
 }

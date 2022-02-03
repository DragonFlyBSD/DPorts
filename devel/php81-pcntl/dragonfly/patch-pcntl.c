Avoid undef usages

--- pcntl.c.orig	2021-12-15 02:00:45 UTC
+++ pcntl.c
@@ -1528,9 +1528,11 @@ PHP_FUNCTION(pcntl_rfork)
 		flags |= RFPROC;
 	}
 
+#ifdef RFTSIGZMB
 	if ((flags & RFTSIGZMB) != 0) {
 		flags |= RFTSIGFLAGS(csignal);
 	}
+#endif
 
 	pid = rfork(flags);
 

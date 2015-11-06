--- channels/chan_unistim.c.orig 2015-10-10 00:23:39.000000000 +0200
+++ channels/chan_unistim.c
@@ -984,7 +984,7 @@
 	memcpy(&toAddr->sin_addr, &ip_msg.address, sizeof(struct in_addr));
 	return err;
 #else
-	memcpy(&toAddr, &public_ip, sizeof(&toAddr));
+	memcpy(&toAddr, &public_ip, sizeof(toAddr));
 	return 0;
 #endif
 }

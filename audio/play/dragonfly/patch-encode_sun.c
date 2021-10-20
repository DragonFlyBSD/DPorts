--- encode_sun.c.intermediate	2020-11-23 05:10:28.000000000 +0000
+++ encode_sun.c
@@ -10,6 +10,7 @@ static char rcsid[] =
 #include <unistd.h>
 #include <signal.h>
 #include <err.h>
+#include <arpa/inet.h>
 
 #include <sys/soundcard.h>
 

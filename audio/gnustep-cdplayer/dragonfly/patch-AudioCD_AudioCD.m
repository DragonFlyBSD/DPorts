--- AudioCD/AudioCD.m.orig
+++ AudioCD/AudioCD.m
@@ -25,6 +25,8 @@
 #include <unistd.h>
 
 #include <cdaudio.h>
+/* libcdaudio defines it but its header does not declare it */
+unsigned long cddb_direct_discid(struct disc_info disc);
 
 #include "AudioCD.h"
 

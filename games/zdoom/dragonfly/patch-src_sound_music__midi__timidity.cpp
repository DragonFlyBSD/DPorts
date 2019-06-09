Add missing <sys/select.h> for select() visibility.

--- src/sound/music_midi_timidity.cpp.orig	2016-02-22 02:11:13 UTC
+++ src/sound/music_midi_timidity.cpp
@@ -8,6 +8,7 @@
 #include <unistd.h>
 
 #include <sys/types.h>
+#include <sys/select.h>
 #include <sys/wait.h>
 #include <wordexp.h>
 #include <signal.h>

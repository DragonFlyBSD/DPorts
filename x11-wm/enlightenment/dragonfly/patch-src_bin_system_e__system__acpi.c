--- src/bin/system/e_system_acpi.c.orig
+++ src/bin/system/e_system_acpi.c
@@ -1,7 +1,7 @@
 #include "e_system.h"
 #if defined __OpenBSD__
 // no local funcs
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
 // no local funcs
 #else
 #  include <linux/input.h>
@@ -232,7 +232,7 @@
 {
 #  if defined __OpenBSD__
 // no local funcs
-#  elif defined __FreeBSD__
+#  elif defined __FreeBSD__ || defined __DragonFly__
 // no local funcs
 #  else
   dev_open();

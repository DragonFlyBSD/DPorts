--- src/spiceqxl_uinput.c.orig
+++ src/spiceqxl_uinput.c
@@ -9,14 +9,16 @@
 #include <errno.h>
 #include <stdio.h>
 
-#include <linux/input.h>
-#include <linux/uinput.h>
 
 #include "qxl_option_helpers.h"
 #include "spiceqxl_util.h"
 #include "spiceqxl_inputs.h"
 
 #include "spiceqxl_uinput.h"
+
+/* after the X server headers: linux/input.h defines BUS_PCI and BUS_USB */
+#include <linux/input.h>
+#include <linux/uinput.h>
 
 static const char *uinput_filename;
 static int uinput_fd;

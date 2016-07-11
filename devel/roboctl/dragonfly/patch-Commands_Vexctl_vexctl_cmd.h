--- Commands/Vexctl/vexctl_cmd.h.orig	2012-12-19 18:46:04.000000000 +0200
+++ Commands/Vexctl/vexctl_cmd.h
@@ -6,7 +6,7 @@ typedef struct
     char    *launch_prog;
 }   arg_t;
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 /* Prolific USB to serial driver */
 /* Standard serial port #define DEFAULT_DEV "/dev/cuad0" */
 #define DEFAULT_DEV "/dev/cuaU0"

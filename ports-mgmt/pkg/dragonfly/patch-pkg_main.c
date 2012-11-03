--- pkg/main.c.orig	2012-11-03 12:22:08.000000000 +0100
+++ pkg/main.c	2012-11-03 12:34:52.000000000 +0100
@@ -38,7 +38,9 @@
 #include <string.h>
 #include <sysexits.h>
 #include <unistd.h>
+#ifndef NO_LIBJAIL
 #include <jail.h>
+#endif
 
 #include <pkg.h>
 
@@ -93,10 +95,16 @@
 static void
 usage(void)
 {
+#ifndef NO_LIBJAIL
 	fprintf(stderr, "usage: pkg [-v] [-d] [-j <jail name or id>|-c <chroot path>] <command> [<args>]\n\n");
+#else
+	fprintf(stderr, "usage: pkg [-v] [-d] [-c <chroot path>] <command> [<args>]\n\n");
+#endif
 	fprintf(stderr, "Global options supported:\n");
 	fprintf(stderr, "\t%-15s%s\n", "-d", "Increment debug level");
+#ifndef NO_LIBJAIL
 	fprintf(stderr, "\t%-15s%s\n", "-j", "Execute pkg(1) inside a jail(8)");
+#endif
 	fprintf(stderr, "\t%-15s%s\n", "-c", "Execute pkg(1) inside a chroot(8)");
 	fprintf(stderr, "\t%-15s%s\n\n", "-v", "Display pkg(1) version");
 	fprintf(stderr, "Commands supported:\n");
@@ -161,7 +169,9 @@
 	struct commands *command = NULL;
 	unsigned int ambiguous = 0;
 	const char *chroot_path = NULL;
+#ifndef NO_LIBJAIL
 	int jid;
+#endif
 	const char *jail_str = NULL;
 	size_t len;
 	signed char ch;
@@ -186,9 +196,11 @@
 		case 'c':
 			chroot_path = optarg;
 			break;
+#ifndef NO_LIBJAIL
 		case 'j':
 			jail_str = optarg;
 			break;
+#endif
 		case 'v':
 			version++;
 			break;
@@ -222,6 +234,7 @@
 		if (chroot(chroot_path) == -1)
 			errx(EX_SOFTWARE, "chroot failed!");
 
+#if USE_LIBJAIL
 	if (jail_str != NULL) {
 		jid = jail_getid(jail_str);
 		if (jid < 0)
@@ -230,6 +243,7 @@
 		if (jail_attach(jid) == -1)
 			err(1, "jail_attach(%s)", jail_str);
 	}
+#endif
 
 	if (jail_str != NULL || chroot_path != NULL)
 		if (chdir("/") == -1)

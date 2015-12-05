--- ../Makefile.os.orig	2014-12-29 22:41:58.000000000 +0200
+++ ../Makefile.os
@@ -52,6 +52,12 @@ ifeq ($(OSTYPE), darwin)
 	OPERATING_SYSTEM_NAME = Mac OS X
 endif
 
+# DragonFly
+ifeq ($(OS), DragonFly)
+	OPERATING_SYSTEM = DragonFly
+	OPERATING_SYSTEM_NAME = DragonFly
+endif
+
 # FreeBSD
 ifeq ($(OS), FreeBSD)
 	OPERATING_SYSTEM = FreeBSD

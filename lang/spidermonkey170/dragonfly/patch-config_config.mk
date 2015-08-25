--- config/config.mk.orig	2013-02-11 22:33:22 UTC
+++ config/config.mk
@@ -92,7 +92,7 @@ AUTOCONF_TOOLS	= $(topsrcdir)/build/auto
 # but save the version to allow multiple versions of the same base
 # platform to be built in the same tree.
 #
-ifneq (,$(filter FreeBSD HP-UX Linux NetBSD OpenBSD SunOS,$(OS_ARCH)))
+ifneq (,$(filter DragonFly FreeBSD HP-UX Linux NetBSD OpenBSD SunOS,$(OS_ARCH)))
 OS_RELEASE	:= $(basename $(OS_RELEASE))
 
 # Allow the user to ignore the OS_VERSION, which is usually irrelevant.

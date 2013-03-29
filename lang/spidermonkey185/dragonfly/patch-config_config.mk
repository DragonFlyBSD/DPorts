--- config/config.mk.orig	2011-03-31 19:08:36.000000000 +0000
+++ config/config.mk
@@ -139,7 +139,7 @@ endif
 # but save the version to allow multiple versions of the same base
 # platform to be built in the same tree.
 #
-ifneq (,$(filter FreeBSD HP-UX IRIX Linux NetBSD OpenBSD OSF1 SunOS,$(OS_ARCH)))
+ifneq (,$(filter DragonFly FreeBSD HP-UX IRIX Linux NetBSD OpenBSD OSF1 SunOS,$(OS_ARCH)))
 OS_RELEASE	:= $(basename $(OS_RELEASE))
 
 # Allow the user to ignore the OS_VERSION, which is usually irrelevant.

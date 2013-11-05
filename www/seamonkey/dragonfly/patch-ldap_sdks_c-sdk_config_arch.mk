--- ldap/sdks/c-sdk/config/arch.mk.orig	2013-10-23 22:09:34.000000000 +0000
+++ ldap/sdks/c-sdk/config/arch.mk
@@ -149,6 +149,10 @@ ifeq (,$(filter-out Linux FreeBSD,$(OS_A
 OS_RELEASE	:= $(shell echo "$(OS_RELEASE)" | sed 's/-.*//')
 endif
 
+ifeq ($(OS_ARCH), DragonFly)
+    OS_ARCH = FreeBSD
+end
+
 #
 # Distinguish between OSF1 V4.0B and V4.0D
 #

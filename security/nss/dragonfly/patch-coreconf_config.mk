--- coreconf/config.mk.orig	2024-08-30 12:18:39 UTC
+++ coreconf/config.mk
@@ -31,7 +31,7 @@ endif
 #######################################################################
 
 TARGET_OSES = FreeBSD NetBSD OpenUNIX QNX Darwin OpenBSD \
-              AIX WINNT Linux Android
+              AIX WINNT Linux Android DragonFly
 
 ifeq (,$(filter-out $(TARGET_OSES),$(OS_TARGET)))
 include $(CORE_DEPTH)/coreconf/$(OS_TARGET).mk

--- coreconf/config.mk.orig	2013-06-27 17:58:08.000000000 +0000
+++ coreconf/config.mk
@@ -31,7 +31,7 @@ endif
 #######################################################################
 
 TARGET_OSES = FreeBSD BSD_OS NetBSD OpenUNIX OS2 QNX Darwin BeOS OpenBSD \
-              AIX RISCOS WINNT WIN95 Linux Android
+              AIX RISCOS WINNT WIN95 Linux Android DragonFly
 
 ifeq (,$(filter-out $(TARGET_OSES),$(OS_TARGET)))
 include $(CORE_DEPTH)/coreconf/$(OS_TARGET).mk

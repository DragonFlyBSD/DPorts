--- ../../security/coreconf/config.mk.orig	2013-01-08 16:19:07.000000000 +0000
+++ ../../security/coreconf/config.mk
@@ -31,7 +31,7 @@ endif
 #######################################################################
 
 TARGET_OSES = FreeBSD BSD_OS NetBSD OpenUNIX OS2 QNX Darwin BeOS OpenBSD \
-              AIX RISCOS WINNT WIN95 Linux Android
+              AIX RISCOS WINNT WIN95 Linux Android DragonFly
 
 ifeq (,$(filter-out $(TARGET_OSES),$(OS_TARGET)))
 include $(CORE_DEPTH)/coreconf/$(OS_TARGET).mk
@@ -175,3 +175,4 @@ endif
 DEFINES += -DUSE_UTIL_DIRECTLY
 USE_UTIL_DIRECTLY = 1
 
+EXTRA_SHARED_LIBS+=	-Wl,-R${PREFIX}/lib/${MOZILLA_PKG_NAME}

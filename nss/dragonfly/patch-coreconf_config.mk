--- ../../security/coreconf/config.mk.orig	2012-05-03 11:42:58.000000000 +0200
+++ ../../security/coreconf/config.mk	2012-12-27 22:48:30.000000000 +0100
@@ -31,7 +31,7 @@
 #######################################################################
 
 TARGET_OSES = FreeBSD BSD_OS NetBSD OpenUNIX OS2 QNX Darwin BeOS OpenBSD \
-              AIX RISCOS WINNT WIN95 WINCE Linux
+              AIX RISCOS WINNT WIN95 WINCE Linux DragonFly
 
 ifeq (,$(filter-out $(TARGET_OSES),$(OS_TARGET)))
 include $(CORE_DEPTH)/coreconf/$(OS_TARGET).mk
@@ -175,3 +175,4 @@
 DEFINES += -DUSE_UTIL_DIRECTLY
 USE_UTIL_DIRECTLY = 1
 
+EXTRA_SHARED_LIBS+=	-Wl,-R${PREFIX}/lib/${MOZILLA_PKG_NAME}

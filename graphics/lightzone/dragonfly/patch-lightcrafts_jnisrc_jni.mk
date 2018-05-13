--- ../lightcrafts/jnisrc/jni.mk.orig	2018-01-22 13:20:04.000000000 +0000
+++ ../lightcrafts/jnisrc/jni.mk
@@ -133,7 +133,7 @@ ifeq ($(PLATFORM),Windows)
   JNI_EXTRA_DISTCLEAN+=	$(JNI_WINDOWS_DISTCLEAN)
 endif
 
-ifeq ($(PLATFORM),$(filter $(PLATFORM),Linux FreeBSD SunOS))
+ifeq ($(PLATFORM),$(filter $(PLATFORM),Linux FreeBSD SunOS DragonFly))
   CFLAGS+= 		$(JNI_LINUX_CFLAGS)
   DEFINES+=		$(JNI_LINUX_DEFINES)
   INCLUDES+= 		$(JNI_LINUX_INCLUDES)

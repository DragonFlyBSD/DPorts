--- ../lightcrafts/mk/executable.mk.orig	2018-01-22 13:20:04.000000000 +0000
+++ ../lightcrafts/mk/executable.mk
@@ -99,7 +99,7 @@ ifeq ($(PLATFORM),Windows)
   LINK+=		$(EXEC_WINDOWS_LINK)
 endif
 
-ifeq ($(PLATFORM),$(filter $(PLATFORM),Linux FreeBSD SunOS))
+ifeq ($(PLATFORM),$(filter $(PLATFORM),Linux FreeBSD SunOS DragonFly))
   CFLAGS+= 		$(EXEC_LINUX_CFLAGS)
   DEFINES+=		$(EXEC_LINUX_DEFINES)
   INCLUDES+= 		$(EXEC_LINUX_INCLUDES)

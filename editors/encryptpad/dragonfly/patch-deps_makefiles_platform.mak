--- deps/makefiles/platform.mak.orig	2018-09-16 03:57:30 UTC
+++ deps/makefiles/platform.mak
@@ -56,6 +56,10 @@ UNIX := on
 endif
 
 # Build on various flavours of BSD
+ifneq ($(findstring DragonFly,$(OS)),)
+PLATFORM  := DRAGONFLY
+UNIX := on
+endif
 ifneq ($(findstring FreeBSD,$(OS)),)
 PLATFORM  := FREEBSD
 UNIX := on

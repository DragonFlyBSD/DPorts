--- common.mk.orig	2014-03-22 14:05:04.000000000 +0200
+++ common.mk
@@ -43,6 +43,14 @@ cxx = $(CXX)
 ar = $(AR)
 make = gmake
 
+else ifneq ($(findstring DragonFly,$(uname)),)
+
+os = freebsd
+cc = $(CC)
+cxx = $(CXX)
+ar = $(AR)
+make = gmake
+
 else ifneq ($(findstring OpenBSD,$(uname)),)
 
 os = openbsd

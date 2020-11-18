--- Common.mak.orig	2020-08-28 06:34:00 UTC
+++ Common.mak
@@ -25,6 +25,8 @@ ifndef HOSTPLATFORM
         uname := $(strip $(shell uname -s))
         ifeq ($(findstring Linux,$(uname)),Linux)
             HOSTPLATFORM := LINUX
+        else ifeq ($(findstring DragonFly,$(uname)),DragonFly)
+            HOSTPLATFORM := BSD
         else ifeq ($(findstring BSD,$(uname)),BSD)
             HOSTPLATFORM := BSD
         else ifeq ($(findstring MINGW,$(uname)),MINGW)

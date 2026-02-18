--- Common.mak.orig	2026-02-13 16:56:41.491546000 +0100
+++ Common.mak	2026-02-13 16:48:36.627801000 +0100
@@ -25,6 +25,8 @@ ifndef HOSTPLATFORM
         uname := $(strip $(shell uname -s))
         ifeq ($(findstring Linux,$(uname)),Linux)
             HOSTPLATFORM := LINUX
+        else ifeq ($(findstring DragonFly,$(uname)),DragonFly)
+	    HOSTPLATFORM := BSD
         else ifeq ($(findstring BSD,$(uname)),BSD)
             HOSTPLATFORM := BSD
         else ifeq ($(findstring MINGW,$(uname)),MINGW)

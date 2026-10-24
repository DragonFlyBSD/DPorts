--- configs/freebsd.mk.orig	2026-10-23 00:00:00 UTC
+++ configs/freebsd.mk
@@ -9,7 +9,9 @@
 QBEFLAGS =
 ASFLAGS =
 LDLINKFLAGS = --gc-sections -z noexecstack
-CFLAGS += -std=c11 -D_XOPEN_SOURCE=700 -Iinclude \
+# DragonFly: _XOPEN_SOURCE=700 caps __ISO_C_VISIBLE at 1999 there, which
+# hides C11's static_assert macro; the default environment exposes it all.
+CFLAGS += -std=c11 -Iinclude \
 	-Wall -Wextra -Werror -pedantic -Wno-unused-parameter
 LDFLAGS ?=
 LIBS += -lm

--- src/libsystemd/sd-bus/bus-protocol.h.orig	2021-01-06 13:56:51 UTC
+++ src/libsystemd/sd-bus/bus-protocol.h
@@ -1,7 +1,7 @@
 /* SPDX-License-Identifier: LGPL-2.1+ */
 #pragma once
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <machine/endian.h>
 #else
 #include <endian.h>

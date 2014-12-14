--- mozilla/config/config.mk.orig	2014-12-03 06:22:33 UTC
+++ mozilla/config/config.mk
@@ -1,4 +1,4 @@
-#
+
 # This Source Code Form is subject to the terms of the Mozilla Public
 # License, v. 2.0. If a copy of the MPL was not distributed with this
 # file, You can obtain one at http://mozilla.org/MPL/2.0/.
@@ -137,7 +137,7 @@ AUTOCONF_TOOLS	= $(topsrcdir)/build/auto
 # but save the version to allow multiple versions of the same base
 # platform to be built in the same tree.
 #
-ifneq (,$(filter FreeBSD HP-UX Linux NetBSD OpenBSD SunOS,$(OS_ARCH)))
+ifneq (,$(filter DragonFly FreeBSD HP-UX Linux NetBSD OpenBSD SunOS,$(OS_ARCH)))
 OS_RELEASE	:= $(basename $(OS_RELEASE))
 
 # Allow the user to ignore the OS_VERSION, which is usually irrelevant.

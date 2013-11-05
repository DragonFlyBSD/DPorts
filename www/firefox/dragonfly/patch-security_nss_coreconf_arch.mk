--- security/nss/coreconf/arch.mk.intermediate	2013-11-04 08:40:07.000000000 +0000
+++ security/nss/coreconf/arch.mk
@@ -57,6 +57,14 @@ ifeq ($(OS_ARCH),BSD_386)
 endif
 
 #
+# Make DragonFly appear as FreeBSD
+#
+
+ifeq ($(OS_ARCH), DragonFly)
+    OS_ARCH = FreeBSD
+endif
+
+#
 # Catch Deterim if SVR4 is NCR or UNIXWARE
 #
 

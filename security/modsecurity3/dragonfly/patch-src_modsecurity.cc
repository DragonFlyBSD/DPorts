--- src/modsecurity.cc.orig	2018-11-02 00:08:12 UTC
+++ src/modsecurity.cc
@@ -134,6 +134,8 @@ const std::string& ModSecurity::whoAmI()
     platform = "HPUX";
 #elif MACOSX
     platform = "MacOSX";
+#elif DRAGONFLY
+    platform = "DragonFly";
 #elif FREEBSD
     platform = "FreeBSD";
 #elif NETBSD

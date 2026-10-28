--- make/autoconf/flags-ldflags.m4.orig
+++ make/autoconf/flags-ldflags.m4
@@ -51,7 +51,11 @@
     # add -z,now ("full relro" - more of the Global Offset Table GOT is marked read only)
     # add --no-as-needed to disable default --as-needed link flag on some GCC toolchains
     # add --icf=all (Identical Code Folding — merges identical functions)
-    BASIC_LDFLAGS="-Wl,-z,defs -Wl,-z,relro -Wl,-z,now -Wl,--no-as-needed -Wl,--exclude-libs,ALL"
+    BASIC_LDFLAGS="-Wl,-z,relro -Wl,-z,now -Wl,--no-as-needed -Wl,--exclude-libs,ALL"
+    # DragonFly: environ lives in crt1.o, not libc.so, so -z defs fails libjvm.
+    if test "x$OPENJDK_TARGET_OS" != xbsd; then
+      BASIC_LDFLAGS="-Wl,-z,defs $BASIC_LDFLAGS"
+    fi
 
     # Linux : remove unused code+data in link step
     if test "x$ENABLE_LINKTIME_GC" = xtrue; then

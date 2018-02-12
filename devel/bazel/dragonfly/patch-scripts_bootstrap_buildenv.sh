--- scripts/bootstrap/buildenv.sh.orig	2018-02-10 10:36:14 UTC
+++ scripts/bootstrap/buildenv.sh
@@ -78,7 +78,7 @@ linux)
   JAVA_HOME="${JAVA_HOME:-$(readlink -f $(which javac) | sed 's_/bin/javac__')}"
   ;;
 
-freebsd)
+freebsd|dragonfly)
   # JAVA_HOME must point to a Java installation.
   JAVA_HOME="${JAVA_HOME:-/usr/local/openjdk8}"
   ;;

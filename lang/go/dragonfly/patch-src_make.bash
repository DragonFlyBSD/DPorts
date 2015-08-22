--- src/make.bash.orig	2015-08-22 10:46:58 UTC
+++ src/make.bash
@@ -100,7 +100,7 @@ done
 # Test for debian/kFreeBSD.
 # cmd/dist will detect kFreeBSD as freebsd/$GOARCH, but we need to
 # disable cgo manually.
-if [ "$(uname -s)" == "GNU/kFreeBSD" ]; then
+if [ "$(uname -s)" = "GNU/kFreeBSD" ]; then
         export CGO_ENABLED=0
 fi
 

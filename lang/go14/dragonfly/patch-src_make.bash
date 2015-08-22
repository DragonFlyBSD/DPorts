--- src/make.bash.orig	2013-11-28 21:38:28.000000000 +0000
+++ src/make.bash
@@ -96,7 +96,7 @@ done
 # Test for debian/kFreeBSD.
 # cmd/dist will detect kFreeBSD as freebsd/$GOARCH, but we need to
 # disable cgo manually.
-if [ "$(uname -s)" == "GNU/kFreeBSD" ]; then
+if [ "$(uname -s)" = "GNU/kFreeBSD" ]; then
         export CGO_ENABLED=0
 fi
 
@@ -116,7 +116,7 @@ case "$GOHOSTARCH" in
 386) mflag=-m32;;
 amd64) mflag=-m64;;
 esac
-if [ "$(uname)" == "Darwin" ]; then
+if [ "$(uname)" = "Darwin" ]; then
 	# golang.org/issue/5261
 	mflag="$mflag -mmacosx-version-min=10.6"
 fi

--- src/tracker-extract/calculate-hash.sh.orig	2024-12-10 07:54:30 UTC
+++ src/tracker-extract/calculate-hash.sh
@@ -1,2 +1,13 @@
 #!/bin/sh
-cat $@ | sha256sum | cut -f 1 -d ' '
+if command -v sha256sum >/dev/null 2>&1; then
+  cat $@ | sha256sum | cut -f 1 -d ' '
+elif command -v sha256 >/dev/null 2>&1; then
+  cat $@ | sha256 -q 2>/dev/null || cat $@ | sha256 | sed -e 's/.*= //' -e 's/ .*//'
+elif command -v shasum >/dev/null 2>&1; then
+  cat $@ | shasum -a 256 | cut -f 1 -d ' '
+elif command -v digest >/dev/null 2>&1; then
+  cat $@ | digest -a sha256
+else
+  echo "calculate-hash.sh: no SHA-256 tool found (sha256sum/sha256/shasum/digest)" >&2
+  exit 1
+fi

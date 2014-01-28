
$FreeBSD: devel/cutter/files/patch-test_run-test.sh 340725 2014-01-22 17:40:44Z mat $

--- test/run-test.sh.orig
+++ test/run-test.sh
@@ -1,4 +1,4 @@
-#!/bin/bash
+#!/bin/sh
 
 BASE_DIR="`dirname $0`"
 export BASE_DIR

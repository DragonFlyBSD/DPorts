
$FreeBSD: ports/devel/cutter/files/patch-test_run-test.sh,v 1.2 2012/11/17 05:55:39 svnexp Exp $

--- test/run-test.sh.orig
+++ test/run-test.sh
@@ -1,4 +1,4 @@
-#!/bin/bash
+#!/bin/sh
 
 BASE_DIR="`dirname $0`"
 export BASE_DIR

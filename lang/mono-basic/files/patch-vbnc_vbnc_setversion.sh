
$FreeBSD: lang/mono-basic/files/patch-vbnc_vbnc_setversion.sh 340725 2014-01-22 17:40:44Z mat $

--- vbnc/vbnc/setversion.sh.orig
+++ vbnc/vbnc/setversion.sh
@@ -1,4 +1,4 @@
-#!/bin/bash -ex
+#!/usr/bin/env bash -ex
 
 VERSION_VB=$1
 VERSION_TMP=version.tmp

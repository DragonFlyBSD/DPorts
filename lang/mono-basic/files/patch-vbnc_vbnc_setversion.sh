
$FreeBSD: lang/mono-basic/files/patch-vbnc_vbnc_setversion.sh 300896 2012-07-14 13:54:48Z beat $

--- vbnc/vbnc/setversion.sh.orig
+++ vbnc/vbnc/setversion.sh
@@ -1,4 +1,4 @@
-#!/bin/bash -ex
+#!/usr/bin/env bash -ex
 
 VERSION_VB=$1
 VERSION_TMP=version.tmp

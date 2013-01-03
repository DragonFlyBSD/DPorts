
$FreeBSD: ports/lang/mono-basic/files/patch-vbnc_vbnc_setversion.sh,v 1.2 2012/11/17 05:58:53 svnexp Exp $

--- vbnc/vbnc/setversion.sh.orig
+++ vbnc/vbnc/setversion.sh
@@ -1,4 +1,4 @@
-#!/bin/bash -ex
+#!/usr/bin/env bash -ex
 
 VERSION_VB=$1
 VERSION_TMP=version.tmp

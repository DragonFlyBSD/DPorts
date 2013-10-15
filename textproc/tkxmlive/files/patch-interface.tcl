$FreeBSD: textproc/tkxmlive/files/patch-interface.tcl 300897 2012-07-14 14:29:18Z beat $
--- interface.tcl	Thu May 30 23:56:36 2002
+++ interface.tcl.new	Fri Feb 20 11:06:41 2004
@@ -1,4 +1,6 @@
-#!/usr/bin/wish
+#!/bin/sh
+# The next line restarts using %%WISH%% \
+exec %%WISH%% "$0"
 
 
 package require msgcat

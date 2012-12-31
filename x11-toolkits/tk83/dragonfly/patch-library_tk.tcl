--- ../library/tk.tcl.intermediate	2012-12-31 19:40:54.658932000 +0100
+++ ../library/tk.tcl	2012-12-31 19:41:20.548968000 +0100
@@ -309,6 +309,7 @@
 	    switch $tcl_platform(os) {
 		"IRIX"  -
 		"FreeBSD" -
+		"DragonFly" -
 		"Linux" { event add <<PrevWindow>> <ISO_Left_Tab> }
 		"HP-UX" {
 		    # This seems to be correct on *some* HP systems.

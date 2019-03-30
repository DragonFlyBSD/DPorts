/var/log/synth/lang___erlang-riak.log:Use of assignment to $[ is deprecated, and will be fatal in Perl 5.30 at /construction/lang/erlang-riak/otp_src_R16B02-basho5/lib/snmp/bin/snmp-v2tov1.pl line 7
Should be ok, shift indexes.
--- lib/snmp/bin/snmp-v2tov1.pl.orig	2014-05-08 14:58:11 UTC
+++ lib/snmp/bin/snmp-v2tov1.pl
@@ -4,7 +4,6 @@
 #
 
 # Translate v2 IMPORTs to their v1 equivalents
-$[ = 1;			# set array base to 1
 $, = ' ';		# set output field separator
 $\ = "\n";		# set output record separator
 
@@ -17,19 +16,19 @@
 	print $_;
 	next line;
     }
-    if (($import == 1) && ($Fld[1] eq ';')) {
+    if (($import == 1) && ($Fld[0] eq ';')) {
 	$import = 0;
     }
-    if (($import == 1) && ($Fld[1] ne 'FROM')) {
-	for ($i = 1; $i <= $#Fld; $i++) {
+    if (($import == 1) && ($Fld[0] ne 'FROM')) {
+	for ($i = 0; $i < $#Fld; $i++) {
 	    $s = ',', $Fld[$i] =~ s/$s//;
 	    $imp{$i + $isave} = $Fld[$i];
 	}
 	$isave = $isave + ($i - 1);
 	next line;
     }
-    if (($import == 1) && ($Fld[1] eq 'FROM')) {
-	&print_imp($Fld[2], *imp, $isave);
+    if (($import == 1) && ($Fld[0] eq 'FROM')) {
+	&print_imp($Fld[1], *imp, $isave);
 	$isave = 0;
 	next line;
     }
@@ -38,7 +37,7 @@
     if (/\"/) {
 	$str = 1;
     }
-    if ($Fld[$#Fld] =~ /\"$/) {
+    if ($Fld[$#Fld-1] =~ /\"$/) {
 	$str = 0;
     }
 
@@ -54,7 +53,7 @@
 	print '--', $_;
 	next line;
     }
-    if (($moduleid == 1) && ($Fld[1] eq '::=')) {
+    if (($moduleid == 1) && ($Fld[0] eq '::=')) {
 	$moduleid = 0;
 	print '--', $_;
 	next line;
@@ -69,14 +68,14 @@
     if (/TEXTUAL-CONVENTION/ && ($str == 0)) {
 	$textual = 1;
 
-	print $Fld[1], $Fld[2];
+	print $Fld[0], $Fld[1];
 	print '--TEXTUAL-CONVENTION';
 	next line;
     }
-    if (($textual == 1) && ($Fld[1] eq 'SYNTAX')) {
+    if (($textual == 1) && ($Fld[0] eq 'SYNTAX')) {
 	$textual = 0;
 	print "--SYNTAX\n";
-	for ($i = 2; $i <= $#Fld; $i++) {
+	for ($i = 1; $i < $#Fld; $i++) {
 	    print $Fld[$i];
 	}
 	next line;
@@ -92,11 +91,11 @@
     if (/OBJECT-IDENTITY/ && ($str == 0)) {
 	$objid = 1;
 
-	print $Fld[1], 'OBJECT IDENTIFIER';
+	print $Fld[0], 'OBJECT IDENTIFIER';
 	print '--OBJECT-IDENTITY';
 	next line;
     }
-    if (($objid == 1) && ($Fld[1] eq '::=')) {
+    if (($objid == 1) && ($Fld[0] eq '::=')) {
 	$objid = 0;
 	print $_;
 	next line;
@@ -113,7 +112,7 @@
 	print '--', $_;
 	next line;
     }
-    if (($modcomp == 1) && ($Fld[1] eq '::=')) {
+    if (($modcomp == 1) && ($Fld[0] eq '::=')) {
 	$modcomp = 0;
 	print '--', $_;
 	next line;
@@ -130,7 +129,7 @@
 	print '--', $_;
 	next line;
     }
-    if (($objgr == 1) && ($Fld[1] eq '::=')) {
+    if (($objgr == 1) && ($Fld[0] eq '::=')) {
 	$objgr = 0;
 	print '--', $_;
 	next line;
@@ -151,7 +150,7 @@
 	print '--', $_;
 	next line;
     }
-    if (($notgr == 1) && ($Fld[1] eq '::=')) {
+    if (($notgr == 1) && ($Fld[0] eq '::=')) {
 	$notgr = 0;
 	print '--', $_;
 	next line;
@@ -165,23 +164,23 @@
     # Translate NOTIFICATION-TYPE into a TRAP-TYPE.
     if (/NOTIFICATION-TYPE/ && ($str == 0)) {
 	$trap = 1;
-	print $Fld[1], ' TRAP-TYPE';
+	print $Fld[0], ' TRAP-TYPE';
 	printf '    ENTERPRISE ';
 	$tri = 1;
 	next line;
     }
-    if (($trap == 1) && ($Fld[1] eq 'OBJECTS')) {
+    if (($trap == 1) && ($Fld[0] eq 'OBJECTS')) {
 	$tra{$tri++} = $_;
 	next line;
     }
-    if (($trap == 1) && ($Fld[1] eq 'STATUS')) {
+    if (($trap == 1) && ($Fld[0] eq 'STATUS')) {
 	next line;
     }
-    if (($trap == 1) && ($Fld[1] eq '::=')) {
-	print $Fld[3];
+    if (($trap == 1) && ($Fld[0] eq '::=')) {
+	print $Fld[2];
 	&pr_trap(*tra, $tri);
 	printf '    ::= ';
-	print $Fld[4];
+	print $Fld[3];
 	$tri = 1;
 	$trap = 0;
 	next line;

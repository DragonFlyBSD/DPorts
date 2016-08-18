--- make/makedis.csh.intermediate	2016-08-12 15:41:48 UTC
+++ make/makedis.csh
@@ -65,6 +65,10 @@ endif
 
 set os=`uname -s`
 
+if ( "$os" == "DragonFly" ) then
+	set os=FreeBSD
+endif
+
 #by default any Unix has Motif installed. In case of Linux do a check later.
 set HAVE_MOTIF=1
 #darwin will use native Mac GUI

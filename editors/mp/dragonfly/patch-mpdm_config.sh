--- mpdm/config.sh.intermediate	2013-03-19 00:14:38.495347000 +0000
+++ mpdm/config.sh
@@ -70,7 +70,7 @@ echo "Configuring MPDM..."
 
 echo "/* automatically created by config.sh - do not modify */" > config.h
 echo "# automatically created by config.sh - do not modify" > makefile.opts
-> config.ldflags
+echo "-L${PREFIX}/lib -liconv" > config.ldflags
 > config.cflags
 > .config.log
 

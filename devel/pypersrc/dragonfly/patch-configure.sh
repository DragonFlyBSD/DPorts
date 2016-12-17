--- configure.sh.intermediate	2016-12-17 13:34:45.000000000 +0200
+++ configure.sh
@@ -19,7 +19,7 @@ fi
 # Depending on system, determine name of GNU make and create a makefile.
 if [ "`uname -s`" = "Darwin" ]; then
     GMAKE=make
-elif ( uname -a | grep -q BSD ); then
+elif ( `uname -a | grep -q BSD || uname -a | grep -q DragonFly`); then
 	# BSD.
 	GMAKE=gmake
 	# Create a traditional makefile which defers to GNU make.

--- make.sh.intermediate	2020-04-29 15:22:32 UTC
+++ make.sh
@@ -107,7 +107,7 @@ cp Makefile.in Makefile
 sed_replace "s/\\\$(CFLAGS)/$CFLAGS/g" Makefile
 sed_replace "s/\\\$(LIBS)/$LIBS/g" Makefile
 sed_replace "s/\\\$(LIB_VERSION)/$LIB_VERSION/g" Makefile
-make $1 $2 $3
+make $1 $2 $3 || exit 1
 
 if [ "$1" = "clean" ]; then
   /bin/rm -f Makefile _os_define.h

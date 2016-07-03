--- priocntl/Makefile.mk.orig	2004-05-01 19:58:02.000000000 +0300
+++ priocntl/Makefile.mk
@@ -14,7 +14,7 @@ priocntl_s42.o: priocntl.c
 
 install: all
 	uname=`uname`; \
-	if test "$$uname" = Linux || test "$$uname" = FreeBSD; \
+	if test "$$uname" = Linux || test "$$uname" = FreeBSD || test "$$uname" = DragonFly; \
 	then \
 		$(UCBINST) -c priocntl $(ROOT)$(SV3BIN)/priocntl &&\
 		$(STRIP) $(ROOT)$(SV3BIN)/priocntl &&\

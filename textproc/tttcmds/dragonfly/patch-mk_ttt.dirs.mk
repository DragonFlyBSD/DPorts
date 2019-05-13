--- mk/ttt.dirs.mk.orig	2018-12-14 11:31:11 UTC
+++ mk/ttt.dirs.mk
@@ -49,7 +49,7 @@ TESTDIR?=	${TOPDIR}/tests
 
 .include	"ttt.os.mk"
 
-.if ${OS} == "FreeBSD"
+.if ${OS} == "FreeBSD" || ${OS} == "DragonFly"
 # FreeBSD Ports Collection STAGEDIR
 . if exists(${TOPDIR}/../stage)
 STAGEDIR=		${TOPDIR}/../stage

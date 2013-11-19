# Created by: Jason Evans <jasone@FreeBSD.org>
# $FreeBSD: sysutils/procmap/Makefile 333977 2013-11-16 03:33:37Z vanilla $

PORTNAME=	procmap
PORTVERSION=	1.0
CATEGORIES=	sysutils
DISTFILES=	#empty

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Print the contents of a procfs map file

NO_WRKSUBDIR=	yes
MAKEFILE=	/usr/share/mk/bsd.prog.mk
MAKE_ENV+=	BINDIR=${PREFIX}/bin MANDIR=${PREFIX}/man/man \
		PROG=procmap MAN8=procmap.8

PLIST_FILES=	bin/procmap man/man8/${PORTNAME}.8.gz

procmap_files := procmap.c procmap.8

post-extract:
	cd ${FILESDIR} ; \
		${CP} -p ${procmap_files} ${WRKSRC}

.include <bsd.port.mk>

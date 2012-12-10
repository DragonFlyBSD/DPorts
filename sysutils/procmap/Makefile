# New ports collection makefile for:	procmap
# Date created:		22 March 2000
# Whom:			Jason Evans <jasone@freebsd.org>
#
# $FreeBSD: ports/sysutils/procmap/Makefile,v 1.10 2012/11/17 06:01:42 svnexp Exp $
#

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

PLIST_FILES=	bin/procmap
MAN8=		procmap.8
MANCOMPRESSED=	yes

procmap_files := procmap.c procmap.8

post-extract:
	cd ${FILESDIR} ; \
		${CP} -p ${procmap_files} ${WRKSRC}

.include <bsd.port.mk>

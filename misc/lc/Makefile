# Created by: jsellens
# $FreeBSD: misc/lc/Makefile 335899 2013-12-08 14:58:34Z danilo $

PORTNAME=	lc
PORTVERSION=	1.0
CATEGORIES=	misc
MASTER_SITES=	http://www.generalconcepts.com/resources/software/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Alternative to ls(1)

PLIST_FILES=	bin/lc man/man1/lc.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/${DISTNAME}/lc ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKDIR}/${DISTNAME}/lc.1 ${STAGEDIR}${MAN1PREFIX}/man/man1

.include <bsd.port.mk>

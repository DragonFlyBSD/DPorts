# New ports collection makefile for:	libnaji
# Date created:				18 May 2005
# Whom:					NECDET COKYAZICI <cokyazici@yahoo.co.uk>
#
# $FreeBSD: ports/devel/libnaji/Makefile,v 1.7 2012/11/17 05:55:55 svnexp Exp $
#

PORTNAME=	libnaji
PORTVERSION=	0.6.4
CATEGORIES=	devel
MASTER_SITES=	SF/najitool/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A library that generates, converts, and filters files

DISTVERSIONSUFFIX=	.src

do-install:
	${INSTALL_DATA} ${WRKSRC}/libnaji.h ${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/libnaji.a ${PREFIX}/lib

.include <bsd.port.mk>

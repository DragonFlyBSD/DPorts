# Created by: NECDET COKYAZICI <cokyazici@yahoo.co.uk>
# $FreeBSD: devel/libnaji/Makefile 324130 2013-08-01 21:33:53Z bapt $

PORTNAME=	libnaji
PORTVERSION=	0.6.4
CATEGORIES=	devel
MASTER_SITES=	SF/najitool/${PORTNAME}/${PORTVERSION}

MAINTAINER=	rodrigo@bebik.net
COMMENT=	Library that generates, converts, and filters files

MAKE_ARGS=	cc=${CC}

DISTVERSIONSUFFIX=	.src

do-install:
	${INSTALL_DATA} ${WRKSRC}/libnaji.h ${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/libnaji.a ${PREFIX}/lib

.include <bsd.port.mk>

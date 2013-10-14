# Created by: Alexey Dokuchaev <danfe@regency.nsu.ru>
# $FreeBSD: archivers/nwreckdum/Makefile 328246 2013-09-25 03:26:07Z vanilla $

PORTNAME=	nwreckdum
PORTVERSION=	0.0.6
PORTREVISION=	2
CATEGORIES=	archivers games

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Utility for manipulating of Quake packed data files

LICENSE=	GPLv2

USE_GITHUB=	yes
GH_ACCOUNT=	danfe
GH_TAGNAME=	${GH_COMMIT}
GH_COMMIT=	22cbc47

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}/${PREFIX}/bin

.include <bsd.port.mk>

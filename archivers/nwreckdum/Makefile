# Created by: Alexey Dokuchaev <danfe@regency.nsu.ru>
# $FreeBSD: ports/archivers/nwreckdum/Makefile,v 1.11 2012/12/16 15:58:27 svnexp Exp $

PORTNAME=	nwreckdum
PORTVERSION=	0.0.6
PORTREVISION=	2
CATEGORIES=	archivers games

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Utility for manipulating of Quake packed data files

LICENSE=	GPLv2

USE_GITHUB=	yes
GH_ACCOUNT=	danfe
GH_TAGNAME=	master
GH_COMMIT=	22cbc47

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>

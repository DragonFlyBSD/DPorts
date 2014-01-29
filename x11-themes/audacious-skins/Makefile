# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: x11-themes/audacious-skins/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	audacious-skins
PORTVERSION=	0.4
CATEGORIES=	x11-themes
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Collection of audacious skins

BUILD_DEPENDS=	audacious:${PORTSDIR}/multimedia/audacious

USE_XZ=		yes
NO_BUILD=	yes

DATADIR=	${PREFIX}/share/audacious

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/Skins
	${INSTALL_DATA} ${WRKSRC}/Skins/*/*.wsz ${STAGEDIR}${DATADIR}/Skins

.include <bsd.port.mk>

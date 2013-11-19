# Created by: Alexey Dokuchaev <danfe@regency.nsu.ru>
# $FreeBSD: games/wmfortune/Makefile 333615 2013-11-12 20:29:12Z danilo $

PORTNAME=	wmfortune
PORTVERSION=	0.241
PORTREVISION=	3
CATEGORIES=	games windowmaker afterstep
MASTER_SITES=	http://www.dockapps.org/files/90/128/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Dockapp that outputs fortune messages

PLIST_FILES=	bin/wmfortune
USES=		gmake
USE_XORG=	xpm

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wmfortune ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>

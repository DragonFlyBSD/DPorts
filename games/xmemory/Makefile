# Created by: Dave Chapeskie <dchapes@ddm.on.ca>
# $FreeBSD: games/xmemory/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	xmemory
PORTVERSION=	3.7
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	games/multiplayer
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Multi-player memory game

USES=		imake
USE_XORG=	x11 xext

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/X11/xmemory
	${INSTALL_DATA} ${WRKSRC}/home.mem ${WRKSRC}/sports.mem \
			${STAGEDIR}${PREFIX}/lib/X11/xmemory
	${LN} -sf home.mem ${STAGEDIR}${PREFIX}/lib/X11/xmemory/default.mem

.include <bsd.port.mk>

# New ports collection makefile for:	tuxpaint-stamps
# Date created:				15 Jul 2005
# Whom:					Alejandro Pulver <alejandro@varnet.biz>
#
# $FreeBSD: ports/games/tuxpaint-stamps/Makefile,v 1.18 2012/11/17 05:57:55 svnexp Exp $
#

PORTNAME=	tuxpaint-stamps
PORTVERSION=	2009.06.28
CATEGORIES=	games
MASTER_SITES=	SF/tuxpaint/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	TuxPaint Stamps

RUN_DEPENDS=	tuxpaint:${PORTSDIR}/games/tuxpaint

NO_BUILD=	yes
INSTALL_TARGET=	install-all

DATADIR=	${PREFIX}/share/tuxpaint

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|' ${WRKSRC}/${MAKEFILE}

.include <bsd.port.mk>

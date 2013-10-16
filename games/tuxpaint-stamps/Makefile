# Created by: Alejandro Pulver <alejandro@varnet.biz>
# $FreeBSD: games/tuxpaint-stamps/Makefile 327730 2013-09-20 17:36:33Z bapt $

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

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|' ${WRKSRC}/${MAKEFILE}

.include <bsd.port.mk>

# Created by: Chris D. Faulhaber <jedgar@FreeBSD.org>
# $FreeBSD: games/xinvaders3d/Makefile 333698 2013-11-13 15:09:42Z danilo $

PORTNAME=	xinvaders3d
PORTVERSION=	1.3.6
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/XInvaders%203d/${PORTVERSION}
DISTNAME=	${PORTNAME}-${PORTVERSION}.src

MAINTAINER=	ports@FreeBSD.org
COMMENT=	3D Vector-graphics Space Invaders clone for X

USE_XORG=	x11
PLIST_FILES=	bin/xinv3d
WRKSRC=		${WRKDIR}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xinv3d ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>

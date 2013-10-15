# Created by: Kris Kennaway <kkennawa@physics.adelaide.edu.au>
# $FreeBSD: games/xflame/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	xflame
PORTVERSION=	1.1.1
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=kris

MAINTAINER=	ports@FreeBSD.org
COMMENT=	cool animated flame

DEPRECATED=	No more public distfiles

USES=		imake
USE_XORG=	x11 xext

NO_INSTALL_MANPAGES=	yes
PLIST_FILES=		bin/xflame

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xflame ${PREFIX}/bin/xflame

.include <bsd.port.mk>

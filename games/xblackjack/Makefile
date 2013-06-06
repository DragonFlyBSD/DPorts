# Created by: erich@FreeBSD.org
# $FreeBSD: games/xblackjack/Makefile 319469 2013-05-31 08:11:55Z antoine $

PORTNAME=	xblackjack
PORTVERSION=	2.2
PORTREVISION=	3
CATEGORIES=	games
MASTER_SITES=	XCONTRIB
MASTER_SITE_SUBDIR=	games
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	ports@FreeBSD.org
COMMENT=	X11/Motif blackjack game

LIB_DEPENDS=	Xm:${PORTSDIR}/x11-toolkits/lesstif

USE_IMAKE=	yes
USE_XORG=	x11 xext xp xt xmu
MAN1=		xblackjack.1
CFLAGS+=	-Wno-error=return-type

.include <bsd.port.mk>

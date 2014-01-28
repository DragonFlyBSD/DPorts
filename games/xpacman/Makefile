# Created by: joerg
# $FreeBSD: games/xpacman/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	xpacman
PORTVERSION=	1.0
PORTREVISION=	3
CATEGORIES=	games
MASTER_SITES=	ftp://ftp.nvg.unit.no/pub/pacman/
DISTNAME=	pacman10

MAINTAINER=	joerg@FreeBSD.org
COMMENT=	Old action game

NO_WRKSUBDIR=	Does not unpack into subdir.
USE_ZIP=	yes
USES=		imake
USE_XORG=	x11 xext
MAN1=		pacman.1
PLIST_FILES=	bin/pacman

NO_STAGE=	yes
.include <bsd.port.mk>

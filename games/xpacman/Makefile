# New ports collection makefile for:    xpacman
# Date created:         19 Aug 1995
# Whom:                 joerg
#
# $FreeBSD: ports/games/xpacman/Makefile,v 1.16 2012/11/17 05:57:58 svnexp Exp $
#

PORTNAME=	xpacman
PORTVERSION=	1.0
PORTREVISION=	3
CATEGORIES=	games
MASTER_SITES=	ftp://ftp.nvg.unit.no/pub/pacman/
DISTNAME=	pacman10

MAINTAINER=	joerg@FreeBSD.org
COMMENT=	An old action game

NO_WRKSUBDIR=	Does not unpack into subdir.
USE_ZIP=	yes
USE_IMAKE=	yes
USE_XORG=	x11 xext
MAN1=		pacman.1
PLIST_FILES=	bin/pacman

.include <bsd.port.mk>

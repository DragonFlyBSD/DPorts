# New ports collection makefile for:	tvtwm
# Date created:		5th December 1994
# Whom:			gpalmer
#
# $FreeBSD: ports/x11-wm/tvtwm/Makefile,v 1.30 2012/11/17 06:03:43 svnexp Exp $
#

PORTNAME=	tvtwm
PORTVERSION=	pl11
PORTREVISION=	1
CATEGORIES=	x11-wm
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	window_managers
DISTNAME=	${PORTNAME}.${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Twm with a virtual desktop

WRKSRC=		${WRKDIR}/tvtwm
USE_IMAKE=	yes
USE_XORG=	xbitmaps xpm xmu
MAN1=		tvtwm.1
MANCOMPRESSED=	no
PLIST_FILES=	bin/tvtwm

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/tvtwm ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/tvtwm.man ${MANPREFIX}/man/man1/tvtwm.1

.include <bsd.port.mk>

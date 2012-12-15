# New ports collection makefile for:    xmille
# Date created:         30 Dec 1994
# Whom:                 swallace
#
# $FreeBSD: ports/games/xmille/Makefile,v 1.26 2012/11/17 05:57:57 svnexp Exp $
#

PORTNAME=	xmille
PORTVERSION=	2.0
PORTREVISION=	3
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	games
DISTNAME=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	X window mille bourne game

WRKSRC=		${WRKDIR}/Mille

USE_IMAKE=	yes
USE_XORG=	x11 xext
MAN1=		xmille.1
PLIST_FILES=	bin/xmille
MAKE_JOBS_UNSAFE=	yes

post-extract:
	@${FIND} ${WRKSRC} -name '*.[ao]' -delete

.include <bsd.port.mk>

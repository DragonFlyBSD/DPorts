# Created by: Babak Farrokhi <babak@farrokhi.net>
# $FreeBSD: x11-themes/cursor-grounation-theme/Makefile 338913 2014-01-06 17:48:27Z antoine $

PORTNAME=	cursor-grounation-theme
PORTVERSION=	0.3
PORTREVISION=	2
CATEGORIES=	x11-themes
MASTER_SITES=	http://www.gnome-look.org/CONTENT/content-files/
DISTNAME=	14484-Grounation-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Moshi's Grounation cursors

NO_BUILD=	yes
USE_BZIP2=	yes

WRKSRC=		${WRKDIR}/Grounation-${PORTVERSION}

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/X11/icons/grounation/cursors
	${INSTALL_DATA} ${WRKSRC}/Grounation/cursors/* \
		${STAGEDIR}${PREFIX}/lib/X11/icons/grounation/cursors

.include <bsd.port.mk>

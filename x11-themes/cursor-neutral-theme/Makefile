# Created by: Babak Farrokhi <babak@farrokhi.net>
# $FreeBSD: x11-themes/cursor-neutral-theme/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	cursor-neutral-theme
DISTVERSION=	1.13a
PORTREVISION=	2
CATEGORIES=	x11-themes
MASTER_SITES=	http://www.gnome-look.org/CONTENT/content-files/
DISTNAME=	28310-neutral-${DISTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Extended Jaguar X cursor theme

NO_BUILD=	yes

WRKSRC=		${WRKDIR}/neutral

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/X11/icons/neutral/cursors
	${INSTALL_DATA} ${WRKSRC}/cursors/* \
		${STAGEDIR}${PREFIX}/lib/X11/icons/neutral/cursors

.include <bsd.port.mk>

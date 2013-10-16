# Created by: Babak Farrokhi <babak@farrokhi.net>
# $FreeBSD: x11-themes/cursor-neutral-theme/Makefile 327783 2013-09-20 23:54:03Z bapt $

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

NO_STAGE=	yes
do-install:
	@${MKDIR} ${PREFIX}/lib/X11/icons/neutral/cursors
	cd ${WRKSRC}/cursors \
		&& ${INSTALL_DATA} * ${PREFIX}/lib/X11/icons/neutral/cursors

.include <bsd.port.mk>

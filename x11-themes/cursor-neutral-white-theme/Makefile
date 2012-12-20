# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: ports/x11-themes/cursor-neutral-white-theme/Makefile,v 1.3 2012/11/17 06:03:30 svnexp Exp $

PORTNAME=	cursor-neutral-white-theme
DISTVERSION=	1.1
CATEGORIES=	x11-themes
MASTER_SITES=	http://www.gnome-look.org/CONTENT/content-files/
DISTNAME=	108143-Neutral++_White-${DISTVERSION}

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	White cursor theme based on neutral

USE_BZIP2=	yes
NO_BUILD=	yes

WRKSRC=		${WRKDIR}/Neutral++_White

do-install:
	@${MKDIR} ${PREFIX}/lib/X11/icons/Neutral++_White/cursors
	cd ${WRKSRC}/cursors \
		&& ${INSTALL_DATA} * ${PREFIX}/lib/X11/icons/Neutral++_White/cursors

.include <bsd.port.mk>

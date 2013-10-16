# Created by: Babak Farrokhi <babak@farrokhi.net>
# $FreeBSD: x11-themes/cursor-grounation-theme/Makefile 327783 2013-09-20 23:54:03Z bapt $

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

NO_STAGE=	yes
do-install:
	@${MKDIR} ${PREFIX}/lib/X11/icons/grounation/cursors
	cd ${WRKSRC}/Grounation/cursors \
		&& ${INSTALL_DATA} * ${PREFIX}/lib/X11/icons/grounation/cursors

.include <bsd.port.mk>

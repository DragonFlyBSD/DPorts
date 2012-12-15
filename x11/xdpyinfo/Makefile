# New ports collection makefile for:	xdpyinfo
# Date Created:				17 Feb 2006
# Whom:					Florent Thoumie <flz@FreeBSD.org>
#
# $FreeBSD: ports/x11/xdpyinfo/Makefile,v 1.10 2012/11/17 06:03:21 svnexp Exp $
#

PORTNAME=	xdpyinfo
PORTVERSION=	1.3.0
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Display information utility for X

LICENSE=	MIT

XORG_CAT=	app
USE_XORG=	xext x11 xtst xxf86vm xxf86dga xi xrender \
		xinerama dmxproto xp
CONFIGURE_ARGS=	--without-xf86misc

PLIST_FILES=	bin/xdpyinfo

MAN1=		xdpyinfo.1

.include <bsd.port.mk>

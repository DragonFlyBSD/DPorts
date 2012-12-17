# New ports collection makefile for:	xset
# Date Created:				17 Feb 2006
# Whom:					Florent Thoumie <flz@FreeBSD.org>
#
# $FreeBSD: ports/x11/xset/Makefile,v 1.10 2012/11/17 06:03:23 svnexp Exp $
#

PORTNAME=	xset
PORTVERSION=	1.2.2
PORTREVISION=	1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	User preference utility for X

XORG_CAT=	app
USE_XORG=	xmuu xproto x11 xext xfontcache
CONFIGURE_ARGS=	--without-xf86misc

PLIST_FILES=	bin/xset

MAN1=		xset.1

.include <bsd.port.mk>

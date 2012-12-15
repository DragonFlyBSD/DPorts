# New ports collection makefile for:   libXxf86misc
# Date Created:			8 Feb 2006
# Whom:				Eric Anholt <anholt@FreeBSD.org>
#
# $FreeBSD: ports/x11/libXxf86misc/Makefile,v 1.6 2012/11/17 06:03:17 svnexp Exp $
#

PORTNAME=	libXxf86misc
PORTVERSION=	1.0.3
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X XF86-Misc Extension

LICENSE=	MIT

XORG_CAT=	lib
USE_XORG=	xproto x11 xextproto xext xf86miscproto:both

MAN3=		XF86Misc.3 \
		XF86MiscGetKbdSettings.3 \
		XF86MiscGetMouseSettings.3 \
		XF86MiscGetSaver.3 \
		XF86MiscQueryExtension.3 \
		XF86MiscQueryVersion.3 \
		XF86MiscSetKbdSettings.3 \
		XF86MiscSetMouseSettings.3 \
		XF86MiscSetSaver.3

.include <bsd.port.mk>

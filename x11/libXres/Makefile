# New ports collection makefile for:   libXext
# Date Created:			29 Oct, 2003
# Whom:				Eric Anholt <anholt@FreeBSD.org>
#
# $FreeBSD: ports/x11/libXres/Makefile,v 1.27 2012/11/17 06:03:17 svnexp Exp $
#

PORTNAME=	libXres
PORTVERSION=	1.0.5
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X Resource usage library

LICENSE=	MIT

XORG_CAT=	lib
USE_XORG=	x11 xext xextproto resourceproto xproto:both

MAN3=		XRes.3 \
		XResQueryClients.3 \
		XResQueryClientPixmapBytes.3 \
		XResQueryClientResources.3 \
		XResQueryExtension.3 \
		XResQueryVersion.3

.include <bsd.port.mk>

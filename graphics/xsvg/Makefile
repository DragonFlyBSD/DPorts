# New ports collection makefile for:	xsvg
# Date created:		2005-02-16
# Whom:			Michael Johnson <ahze@FreeBSD.org>
#
# $FreeBSD: ports/graphics/xsvg/Makefile,v 1.13 2012/11/17 05:58:26 svnexp Exp $
#   $MCom: ports/graphics/xsvg/Makefile,v 1.3 2005/08/09 05:09:09 ahze Exp $
#

PORTNAME=	xsvg
PORTVERSION=	0.2.1
PORTREVISION=	6
CATEGORIES=	graphics
MASTER_SITES=	http://cairographics.org/snapshots/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	X11 SVG viewer

LIB_DEPENDS=	svg-cairo.1:${PORTSDIR}/graphics/libsvg-cairo

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/xsvg
MAN1=		xsvg.1

.include <bsd.port.mk>

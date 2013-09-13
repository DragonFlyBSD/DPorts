# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: graphics/svg2png/Makefile 326122 2013-09-03 06:36:41Z bapt $
#   $MCom: ports/graphics/svg2png/Makefile,v 1.3 2005/08/06 02:21:48 marcus Exp $

PORTNAME=	svg2png
PORTVERSION=	0.1.3
PORTREVISION=	5
CATEGORIES=	graphics
MASTER_SITES=	http://cairographics.org/snapshots/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Render an SVG image to a PNG image (using cairo)

LIB_DEPENDS=	svg-cairo.1:${PORTSDIR}/graphics/libsvg-cairo

GNU_CONFIGURE=	yes
USES=		pkgconfig

MAN1=		svg2png.1
PLIST_FILES=	bin/svg2png

.include <bsd.port.mk>

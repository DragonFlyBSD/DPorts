# New ports collection makefile for:	svg2pdf
# Date created:		August 05, 2005
# Whom:			Joe Marcus Clarke <marcus@FreeBSD.org>
#
# $FreeBSD: ports/graphics/svg2pdf/Makefile,v 1.9 2012/11/17 05:58:23 svnexp Exp $
#   $MCom: ports/graphics/svg2pdf/Makefile,v 1.2 2005/08/08 02:09:09 marcus Exp $
#

PORTNAME=	svg2pdf
PORTVERSION=	0.1.3
PORTREVISION=	5
CATEGORIES=	graphics
MASTER_SITES=	http://cairographics.org/snapshots/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Render an SVG image to a PDF file (using cairo)

LIB_DEPENDS=	svg-cairo.1:${PORTSDIR}/graphics/libsvg-cairo

GNU_CONFIGURE=	yes

MAN1=		svg2pdf.1
PLIST_FILES=	bin/svg2pdf

.include <bsd.port.mk>

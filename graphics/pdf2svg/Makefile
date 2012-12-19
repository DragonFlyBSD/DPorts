# New ports collection makefile for:	pdf2svg
# Date created:		Mar 13 2009
# Whom:			martin.dieringer@gmx.de
#
# $FreeBSD: ports/graphics/pdf2svg/Makefile,v 1.9 2012/11/17 05:58:18 svnexp Exp $

PORTNAME=	pdf2svg
PORTVERSION=	0.2.1
PORTREVISION=	6
CATEGORIES=	graphics
MASTER_SITES=	http://www.cityinthesky.co.uk/_media/opensource/

MAINTAINER=	martin.dieringer@gmx.de
COMMENT=	Convert PDF to SVG

LIB_DEPENDS=	poppler-glib:${PORTSDIR}/graphics/poppler-glib \
		cairo:${PORTSDIR}/graphics/cairo \
		gtk:${PORTSDIR}/x11-toolkits/gtk20

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/pdf2svg

.include <bsd.port.mk>

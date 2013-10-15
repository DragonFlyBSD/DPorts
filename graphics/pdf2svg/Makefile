# Created by: Martin Dieringer <martin.dieringe@gmx.de>
# $FreeBSD: graphics/pdf2svg/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	pdf2svg
PORTVERSION=	0.2.2
CATEGORIES=	graphics
MASTER_SITES=	http://www.cityinthesky.co.uk/_media/opensource/

MAINTAINER=	martin.dieringer@gmx.de
COMMENT=	Convert PDF to SVG

LIB_DEPENDS=	poppler-glib:${PORTSDIR}/graphics/poppler-glib \
		cairo:${PORTSDIR}/graphics/cairo \
		gtk:${PORTSDIR}/x11-toolkits/gtk20

USES=		pkgconfig
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/pdf2svg

NO_STAGE=	yes
.include <bsd.port.mk>

# Created by: johans
# $FreeBSD: print/paps/Makefile 327765 2013-09-20 22:43:59Z bapt $

PORTNAME=	paps
PORTVERSION=	0.6.8
PORTREVISION=	3
CATEGORIES=	print
MASTER_SITES=	SF

MAINTAINER=	johans@FreeBSD.org
COMMENT=	UTF-8 to PostScript converter using Pango

PLIST_FILES=	bin/paps lib/libpaps.a include/libpaps.h

MAN1=		paps.1

GNU_CONFIGURE=	yes
USE_GNOME=	pango
USES=		pkgconfig

NO_STAGE=	yes
.include <bsd.port.mk>

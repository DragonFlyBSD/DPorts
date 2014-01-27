# $FreeBSD: x11-fonts/fonttosfnt/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	fonttosfnt
PORTVERSION=	1.0.4
CATEGORIES=	x11-fonts

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Wrap a bitmap font in a sftn wrapper

LIB_DEPENDS=	freetype.9:${PORTSDIR}/print/freetype2

XORG_CAT=	app
USE_XORG=	xproto fontenc

PLIST_FILES=	bin/fonttosfnt man/man1/fonttosfnt.1.gz

.include <bsd.port.mk>

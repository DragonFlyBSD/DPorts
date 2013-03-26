# Created by: Pawel Worach
# $FreeBSD: x11-fonts/mkfontscale/Makefile 313935 2013-03-11 19:53:11Z zeising $

PORTNAME=	mkfontscale
PORTVERSION=	1.1.0
CATEGORIES=	x11-fonts

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Creates an index of scalable font files for X

LIB_DEPENDS=	freetype.9:${PORTSDIR}/print/freetype2

XORG_CAT=	app
USE_XORG=	xproto fontenc xorg-macros

PLIST_FILES=	bin/mkfontscale
MAN1=		mkfontscale.1

.include <bsd.port.mk>

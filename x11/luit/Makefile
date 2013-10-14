# $FreeBSD: x11/luit/Makefile 327777 2013-09-20 23:43:19Z bapt $

PORTNAME=	luit
PORTVERSION=	1.1.1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Locale and ISO 2022 support for Unicode terminals

XORG_CAT=	app
USE_XORG=	x11 fontenc

CONFIGURE_ARGS=	--datadir=${LOCALBASE}/lib

PLIST_FILES=	bin/luit

MAN1=		luit.1

NO_STAGE=	yes
.include <bsd.port.mk>

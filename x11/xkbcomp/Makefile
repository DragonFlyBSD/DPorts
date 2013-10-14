# $FreeBSD: x11/xkbcomp/Makefile 327777 2013-09-20 23:43:19Z bapt $

PORTNAME=	xkbcomp
PORTVERSION=	1.2.4
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Compile XKB keyboard description

LICENSE=	MIT

XORG_CAT=	app
USE_XORG=	x11 xkbfile
USES=		pathfix

PLIST_FILES=	bin/xkbcomp \
		libdata/pkgconfig/xkbcomp.pc

MAN1=		xkbcomp.1

NO_STAGE=	yes
.include <bsd.port.mk>

# $FreeBSD: head/x11/xkbcomp/Makefile 472017 2018-06-08 18:39:39Z zeising $

PORTNAME=	xkbcomp
PORTVERSION=	1.4.2
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Compile XKB keyboard description

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		pathfix
XORG_CAT=	app
USE_XORG=	x11 xkbfile

PLIST_FILES=	bin/xkbcomp \
		libdata/pkgconfig/xkbcomp.pc \
		man/man1/xkbcomp.1.gz

.include <bsd.port.mk>

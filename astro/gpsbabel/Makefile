# Created by: Laurent Courty
# $FreeBSD: astro/gpsbabel/Makefile 316831 2013-04-29 16:43:05Z rene $

PORTNAME=	gpsbabel
PORTVERSION=	1.4.4
CATEGORIES=	astro geography
MASTER_SITES=	https://secure.ohos.nl/downloads/ \
		LOCAL/beech

MAINTAINER=	dev2@heesakkers.info
COMMENT=	GPS file translating tool

LIB_DEPENDS=	expat:${PORTSDIR}/textproc/expat2

USE_AUTOTOOLS=	autoconf
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--with-expathdr=${LOCALBASE}/include \
		--with-libexpat=${LOCALBASE}/lib

PLIST_FILES=	bin/gpsbabel

EXTRA_PATCHES=	${FILESDIR}/extra-patch-libusb

.include <bsd.port.mk>

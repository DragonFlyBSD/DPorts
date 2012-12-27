# Created by: Laurent Courty
# $FreeBSD: ports/astro/gpsbabel/Makefile,v 1.19 2012/12/15 23:15:57 svnexp Exp $

PORTNAME=	gpsbabel
PORTVERSION=	1.4.4
CATEGORIES=	astro geography
MASTER_SITES=	https://secure.ohos.nl/downloads/ \
		LOCAL/beech

MAINTAINER=	dev2@heesakkers.info
COMMENT=	A GPS file translating tool

LIB_DEPENDS=	expat:${PORTSDIR}/textproc/expat2

USE_AUTOTOOLS=	autoconf
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--with-expathdr=${LOCALBASE}/include \
		--with-libexpat=${LOCALBASE}/lib

PLIST_FILES=	bin/gpsbabel

.include <bsd.port.pre.mk>

.if ${OSVERSION} < 800069
LIB_DEPENDS+=	usb:${PORTSDIR}/devel/libusb
.else
EXTRA_PATCHES=	${FILESDIR}/extra-patch-libusb
.endif

.include <bsd.port.post.mk>

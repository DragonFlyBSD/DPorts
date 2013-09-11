# Created by: Alexander Nedotsukov <bland@mail.ru>
# $FreeBSD: x11/libgnomemm/Makefile 326129 2013-09-03 08:49:46Z bapt $

PORTNAME=	libgnomemm
PORTVERSION=	2.0.1
PORTREVISION=	13
CATEGORIES=	x11 gnome
MASTER_SITES=	SF/gtkmm/OldFiles
DIST_SUBDIR=	gnome2

MAINTAINER=	bland@FreeBSD.org
COMMENT=	C++ wrapper for libgnome library

LIB_DEPENDS=	gtkmm-2.0:${PORTSDIR}/x11-toolkits/gtkmm20
BUILD_DEPENDS=	gm4:${PORTSDIR}/devel/m4

USE_AUTOTOOLS=	libtool
USES=		gmake pkgconfig
USE_GNOME=	gnomehack libgnome
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--enable-static

.include <bsd.port.mk>

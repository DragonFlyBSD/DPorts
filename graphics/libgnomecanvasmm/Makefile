# Created by: Alexander Nedotsukov <bland@mail.ru>
# $FreeBSD: graphics/libgnomecanvasmm/Makefile 326129 2013-09-03 08:49:46Z bapt $

PORTNAME=	libgnomecanvasmm
PORTVERSION=	2.0.1
PORTREVISION=	12
CATEGORIES=	graphics gnome
MASTER_SITES=	SF/gtkmm/OldFiles
DIST_SUBDIR=	gnome2

MAINTAINER=	bland@FreeBSD.org
COMMENT=	C++ wrapper for libgnomecanvas library

LIB_DEPENDS=	gtkmm-2.0:${PORTSDIR}/x11-toolkits/gtkmm20
BUILD_DEPENDS=	gm4:${PORTSDIR}/devel/m4

USES=		gmake pkgconfig
USE_GNOME=	gnomehack libgnomecanvas
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--enable-static

post-patch:
	@${REINPLACE_CMD} -e '/^SUBDIRS =/s/examples//' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>

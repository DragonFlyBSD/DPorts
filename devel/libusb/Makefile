# Created by: John Reynolds <johnjen@reynoldsnet.org>
# $FreeBSD: devel/libusb/Makefile 315508 2013-03-28 23:47:21Z eadler $

PORTNAME=	libusb
PORTVERSION=	0.1.12
PORTREVISION=	5
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-0.1%20%28LEGACY%29/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library giving userland programs access to USB devices

USE_LDCONFIG=	yes
USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.pre.mk>

.if ${OPSYS} == DragonFly
.  if ${DFLYVERSION} >= 300703
IGNORE=		has been already included into base system
.  endif
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|{libdir}/pkgconfig|{prefix}/libdata/pkgconfig|g' \
		${WRKSRC}/configure
	@${REINPLACE_CMD} -e 's|<stdint.h>|<inttypes.h>|' \
		${WRKSRC}/descriptors.c

.include <bsd.port.post.mk>

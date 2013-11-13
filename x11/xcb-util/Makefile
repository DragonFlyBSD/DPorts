# Created by: Nikos Ntarmos <ntarmos@ceid.upatras.gr>
# $FreeBSD: x11/xcb-util/Makefile 332326 2013-10-31 23:51:57Z garga $

PORTNAME=	xcb-util
PORTVERSION=	0.3.9
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	x11
MASTER_SITES=	http://xcb.freedesktop.org/dist/

MAINTAINER=	garga@FreeBSD.org
COMMENT=	A module with libxcb/libX11 extension/replacement libraries

USE_BZIP2=	yes
USES=		gmake pathfix pkgconfig
USE_LDCONFIG=	yes
USE_XORG=	xau xcb xdmcp xorg-macros
USE_AUTOTOOLS=	libtool

GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} -e \
		's|$${libdir}/pkgconfig|$${prefix}/libdata/pkgconfig|' \
		${WRKSRC}/configure

.include <bsd.port.mk>

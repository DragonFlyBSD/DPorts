# Created by: Nikos Ntarmos <ntarmos@ceid.upatras.gr>
# $FreeBSD: ports/x11/xcb-util/Makefile,v 1.23 2012/12/11 01:35:05 svnexp Exp $

PORTNAME=	xcb-util
PORTVERSION=	0.3.9
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	x11
MASTER_SITES=	http://xcb.freedesktop.org/dist/

MAINTAINER=	garga@FreeBSD.org
COMMENT=	A module with libxcb/libX11 extension/replacement libraries

LIB_DEPENDS=	xcb:${PORTSDIR}/x11/libxcb

USE_BZIP2=	yes
USE_GMAKE=	yes
USE_LDCONFIG=	yes
USE_XORG=	xau xdmcp
USE_AUTOTOOLS=	libtool

GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} -e \
		's|$${libdir}/pkgconfig|$${prefix}/libdata/pkgconfig|' \
		${WRKSRC}/configure

.include <bsd.port.mk>

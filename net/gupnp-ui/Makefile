# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: net/gupnp-ui/Makefile 330889 2013-10-19 15:34:47Z sunpoet $

PORTNAME=	gupnp-ui
PORTVERSION=	0.1.1
PORTREVISION=	4
CATEGORIES=	net
MASTER_SITES=	GNOME

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Framework for UPnP devices

LICENSE=	LGPL20

BUILD_DEPENDS=	gupnp>=0.3:${PORTSDIR}/net/gupnp
LIB_DEPENDS=	libgupnp-1.0.so:${PORTSDIR}/net/gupnp \
		libsoup-2.4.so:${PORTSDIR}/devel/libsoup
RUN_DEPENDS:=	${BUILD_DEPENDS}

GNU_CONFIGURE=	yes
USE_GNOME=	gtk20
USE_LDCONFIG=	yes
USE_PYTHON=	yes
USES=		pathfix pkgconfig

.include <bsd.port.mk>

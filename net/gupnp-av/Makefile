# New ports collection makefile for:	gupnp-av
# Date created:		2009-12-26
# Whom:			Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/net/gupnp-av/Makefile,v 1.10 2012/11/17 06:00:01 svnexp Exp $
#

PORTNAME=	gupnp-av
PORTVERSION=	0.10.3
CATEGORIES=	net
MASTER_SITES=	GNOME

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Helpers for audio/video applications using GUPnP

LICENSE=	LGPL20

BUILD_DEPENDS=	gobject-introspection>=0.9.5:${PORTSDIR}/devel/gobject-introspection \
		gupnp>=0.17.0:${PORTSDIR}/net/gupnp
LIB_DEPENDS=	gupnp-1.0:${PORTSDIR}/net/gupnp
RUN_DEPENDS=	gupnp>=0.17.0:${PORTSDIR}/net/gupnp

CONFIGURE_ARGS=	--enable-introspection=yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GNOME=	glib20 gnomehack
USE_LDCONFIG=	yes
USE_XZ=		yes

.include <bsd.port.mk>

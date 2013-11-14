# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: multimedia/gstreamer-plugins-buzztard/Makefile 332416 2013-11-01 22:14:07Z kwm $

PORTNAME=	buzztard
PORTVERSION=	0.6.0
CATEGORIES=	multimedia
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}%20gstreamer%20extensions/${PORTVERSION}
PKGNAMEPREFIX=	gstreamer-plugins-
DISTNAME=	gst-${PORTNAME}-${PORTVERSION}

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Buzztard gstreamer plugins

LIB_DEPENDS=	libfluidsynth.so:${PORTSDIR}/audio/fluidsynth

USES=		pkgconfig
USE_AUTOTOOLS=	libtool
USE_GSTREAMER=	yes
USE_GNOME=	gnomehack ltverhack
USE_LDCONFIG=	yes
PLIST_SUB=	GST_VERSION="${GST_VERSION}"

post-patch:
	@${REINPLACE_CMD} -e 's|$${datadir}/gtk-doc/html|${DOCSDIR}|' \
		${WRKSRC}/configure

.include <bsd.port.mk>

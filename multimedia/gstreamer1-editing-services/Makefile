PORTNAME=	gstreamer1-editing-services
PORTVERSION=	1.20.5
PORTREVISION=	2
CATEGORIES=	multimedia
MASTER_SITES=	https://gstreamer.freedesktop.org/src/gstreamer-editing-services/
DISTNAME=	gst-editing-services-${PORTVERSION}

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	GStreamer editing services
WWW=		http://gstreamer.freedeskop.org

LICENSE=	LGPL20

USES=		bison compiler:c11 gnome gstreamer meson ninja python:3.8+ pkgconfig tar:xz
USE_LDCONFIG=	yes
USE_GNOME=	glib20 introspection:build libxml2 pygobject3:build
USE_GSTREAMER=	good bad
PORTSCOUT=	limitw:1,even

CONFIGURE_ARGS=	-Ddoc=disabled \
		-Dvalidate=disabled \
		-Dintrospection=enabled \
		-Dpygi-overrides-dir=${PYTHON_SITELIBDIR}/gstreamer-editing-services
PLIST_SUB=	VERSION=1.0 SOVERSION=0.2005.0

BINARY_ALIAS=	python3=${PYTHON_VERSION}

OPTIONS_DEFINE=	BASH
OPTIONS_DEFAULT=BASH
OPTIONS_SUB=	yes

BASH_BUILD_DEPENDS=	bash-completion>0:shells/bash-completion
BASH_MESON_ENABLED=	bash-completion

.include <bsd.port.mk>

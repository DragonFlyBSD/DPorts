PORTNAME=	gstreamer1-plugins-all
PORTVERSION=	${_GST_VERSION}
CATEGORIES=	multimedia

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Meta-port of all GStreamer 1.x plugins
WWW=		https://gstreamer.freedesktop.org/

USES=		gstreamer metaport
USE_GSTREAMER=	${_GST_PLUGINS_VER:Nmsdk}

OPTIONS_EXCLUDE= V4L2 OPENH264
.include <bsd.port.mk>

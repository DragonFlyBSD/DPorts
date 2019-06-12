# DPORT

PORTNAME=	kmscube
PORTVERSION=	0.1a
CATEGORIES=	graphics

MAINTAINER=	zrj@ef.irc
COMMENT=	Example KMS/GBM/EGL application

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GITHUB=	yes
GH_ACCOUNT=	robclark
GH_TAGNAME=	485b38

USES=		gl gnome meson pkgconfig
USE_GL=		gbm egl glesv2
USE_GNOME=	glib20

LIB_DEPENDS=	libdrm.so:graphics/libdrm

OPTIONS_DEFINE=		GSTREAMER
OPTIONS_DEFAULT=	GSTREAMER

GSTREAMER_USE=	gstreamer1=yes

PLIST_FILES=	bin/kmscube

.include <bsd.port.mk>

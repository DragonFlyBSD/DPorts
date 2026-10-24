PORTNAME=	libxkbfile
DISTVERSION=	1.2.0
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	XKB file library
WWW=		https://gitlab.freedesktop.org/xorg/lib/libxkbfile

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		xorg xorg-cat:lib,meson
USE_LDCONFIG=	yes
USE_XORG=	x11 xorgproto

INSTALL_TARGET=	install-strip

CFLAGS= -Wno-maybe-uninitialized
.include <bsd.port.mk>

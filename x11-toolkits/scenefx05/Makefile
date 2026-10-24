PORTNAME=	scenefx
DISTVERSION=	0.5
CATEGORIES=	x11-toolkits
PKGNAMESUFFIX=	05

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	wlroots scene API, but with eye candy!
WWW=		https://github.com/wlrfx/scenefx

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	wayland-protocols>=1.41:graphics/wayland-protocols
LIB_DEPENDS=	libdrm.so:graphics/libdrm \
		libwayland-server.so:graphics/wayland \
		libwlroots-0.20.so:x11-toolkits/wlroots020 \

USES=		compiler:c11 meson pkgconfig xorg
USE_GITHUB=	yes
USE_LDCONFIG=	yes
USE_XORG=	pixman
GH_ACCOUNT=	wlrfx
MESON_ARGS=	-Dexamples=false -Drenderers=${RENDERERS:ts,}
CFLAGS+=	-Wno-unused-function # *corner_radii*
PLIST_SUB=	SUFFIX=-${DISTVERSION}

PORTSCOUT=	limit:^0\.5\.

OPTIONS_DEFINE=	LCMS2 OPENGL
OPTIONS_DEFAULT=LCMS2 OPENGL
OPTIONS_SLAVE=	OPENGL # XXX Remove after adding VULKAN

LCMS2_LIB_DEPENDS=	liblcms2.so:graphics/lcms2
LCMS2_MESON_ENABLED=	color-management

OPENGL_USES=		gl
OPENGL_USE=		GL=egl,gbm,glesv2
OPENGL_VARS=		RENDERERS+=gles2

.include <bsd.port.mk>

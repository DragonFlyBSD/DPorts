# Created by: lesi@FreeBSD.org

PORTNAME=	libdrm
PORTVERSION=	2.4.101
CATEGORIES=	graphics x11
MASTER_SITES=	http://dri.freedesktop.org/libdrm/

MAINTAINER=	ftigeot@wolfpond.org
COMMENT=	Userspace interface to kernel Direct Rendering Module services

LICENSE=	MIT

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/pthread-stubs.pc:devel/libpthread-stubs
BUILD_DEPENDS+=	${LOCALBASE}/share/xsl/docbook/manpages/docbook.xsl:textproc/docbook-xsl
LIB_DEPENDS=	libpciaccess.so:devel/libpciaccess

USES=		meson pkgconfig tar:xz
USE_GNOME=	libxslt:build
USE_LDCONFIG=	yes

# avoid circular dependency in case cairo supports OpenGL (cairo->mesa-libs->libdrm->cairo)
CONFIGURE_ARGS+=	-Dcairo-tests=false

# Do not build code for unsupported drivers
CONFIGURE_ARGS+=	-Dvmwgfx=false

CONFIGURE_ARGS+=	-Dinstall-test-programs=true

.include <bsd.port.mk>

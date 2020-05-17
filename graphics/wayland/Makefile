PORTNAME=	wayland
PORTVERSION=	1.18.0
CATEGORIES=	graphics
MASTER_SITES=	https://wayland.freedesktop.org/releases/
MAINTAINER=	karu.pruun@gmail.com
COMMENT=	Wayland Display Protocol implementation

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

LIB_DEPENDS=	libexpat.so:textproc/expat2 \
		libffi.so:devel/libffi

USES=		meson pkgconfig tar:xz
USE_GNOME=	libxslt:build
USE_LDCONFIG=	yes
MESON_ARGS=	-Ddocumentation=false

.include <bsd.port.mk>


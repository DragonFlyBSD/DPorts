PORTNAME=	wayland
PORTVERSION=	1.16.0
CATEGORIES=	graphics
MASTER_SITES=	https://wayland.freedesktop.org/releases/
MAINTAINER=	karu.pruun@gmail.com
COMMENT=	Wayland Display Protocol implementation

LICENSE=	MIT

USES=		autoreconf gmake libtool pkgconfig tar:xz
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

LIB_DEPENDS=	libexpat.so:textproc/expat2 \
		libffi.so:devel/libffi \
		libxml2.so:textproc/libxml2

BUILD_DEPENDS=	${LOCALBASE}/bin/xsltproc:textproc/libxslt

GNU_CONFIGURE=	YES

CONFIGURE_ARGS+=	--disable-documentation

.include <bsd.port.mk>


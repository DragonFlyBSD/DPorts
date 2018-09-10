PORTNAME=	wayland
PORTVERSION=	1.15.0
CATEGORIES=	graphics
MASTER_SITES=	http://wayland.freedesktop.org/releases/
MAINTAINER=	imre@vdsz.com
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


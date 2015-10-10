PORTNAME=	wayland
PORTVERSION=	1.9.0
CATEGORIES=	graphics
MASTER_SITES=	http://wayland.freedesktop.org/releases/
MAINTAINER=	imre@vdsz.com
COMMENT=	Wayland Display Protocol implementation

LICENSE=	MIT

USES=		tar:xz gmake libtool pkgconfig
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

LIB_DEPENDS=	libevent.so:${PORTSDIR}/devel/libevent2	\
		libevent_pthreads.so:${PORTSDIR}/devel/libevent2 \
		libexpat.so:${PORTSDIR}/textproc/expat2 \
		libffi.so:${PORTSDIR}/devel/libffi

GNU_CONFIGURE=	YES

CONFIGURE_ARGS+=	--disable-documentation --with-libevent=${PREFIX}

.include <bsd.port.mk>


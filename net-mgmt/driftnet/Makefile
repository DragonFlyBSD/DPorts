PORTNAME=	driftnet
DISTVERSIONPREFIX=	v
DISTVERSION=	1.6.0
CATEGORIES=	net-mgmt

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Tool to grab images out of (your) TCP connections
WWW=		https://www.ex-parrot.com/~chris/driftnet/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	makedepend:devel/makedepend
LIB_DEPENDS=	libgif.so:graphics/giflib \
		libpng.so:graphics/png \
		libwebp.so:graphics/webp \
		libwebsockets.so:net/libwebsockets

USES=		autoreconf gettext-runtime gmake gnome jpeg localbase:ldflags \
		pkgconfig xorg
USE_CSTD=	c99
USE_GITHUB=	yes
GH_ACCOUNT=	deiv
USE_GNOME=	gtk30
USE_XORG=	x11 xext xi

GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--disable-debug

INSTALL_TARGET=	install-strip

PLIST_FILES=	bin/driftnet \
		share/man/man1/driftnet.1.gz
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

dfly-patch:
	${REINPLACE_CMD} -e 's@\(freebsd\*\))@\1|dragonfly*)@g' \
		${WRKSRC}/configure.ac
	${REINPLACE_CMD} -e 's@\(D__FAVOR_BSD \)@\1 -D__FreeBSD__=13 @' \
		${WRKSRC}/src/Makefile.am
	${REINPLACE_CMD} -e 's@\(defined(__FreeBSD__)\)@(\1 || defined(__DragonFly__))@g' \
			 -e 's@ifdef \(__FreeBSD__\)@if defined(\1) || defined(__DragonFly__)@' \
		${WRKSRC}/src/pid.c ${WRKSRC}/src/compat/compat.h \
		${WRKSRC}/src/network/layer2.c ${WRKSRC}/src/network/layer3.c

.include <bsd.port.mk>

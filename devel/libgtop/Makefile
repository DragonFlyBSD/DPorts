PORTNAME=	libgtop
PORTVERSION=	2.41.3
CATEGORIES=	devel gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GNOME top library
WWW=		https://gitlab.gnome.org/GNOME/libgtop

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USE_PERL5=	build
USE_XORG=	xau
USES=		gettext gmake gnome libtool pathfix perl5 \
		pkgconfig tar:xz xorg
USE_GNOME=	gnomeprefix glib20 introspection:build
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
CONFIGURE_ARGS=	--enable-introspection

INFO=		libgtop2

PKGMESSAGE=	${FILESDIR}/pkg-message

post-patch:
	@${REINPLACE_CMD} -e 's,freebsd\*|kfreebsd\*),freebsd*|kfreebsd*|dragonfly*),' ${WRKSRC}/configure
	@${REINPLACE_CMD} -e 's,\*bsd\*),*bsd*|dragonfly*),' ${WRKSRC}/configure
	@${REINPLACE_CMD} -e 's,^        freebsd\*),        freebsd*|dragonfly*),' ${WRKSRC}/configure
	@${PERL} -0777 -pi -e 's/#include <net\/if_sppp\.h>\n#else\n#include <i4b\/sppp\/if_sppp\.h>/#include <net\/if_sppp.h>\n#elif defined(__DragonFly__)\n#include <net\/sppp\/if_sppp.h>\n#else\n#include <i4b\/sppp\/if_sppp.h>/g' ${WRKSRC}/configure

.include <bsd.port.mk>

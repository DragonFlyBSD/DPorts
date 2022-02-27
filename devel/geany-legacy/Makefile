
PORTNAME=	geany
PORTVERSION=	1.37.1
PKGNAMESUFFIX=	-legacy
CATEGORIES=	devel editors
MASTER_SITES=	http://download.geany.org/ SF

MAINTAINER=	zrj@ef.irc
COMMENT=	Fast and lightweight GTK+ IDE with gtk2

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

CONFLICTS_INSTALL=	geany

USES=		compiler:c++11-lang desktop-file-utils gettext-tools gmake \
		gnome libtool localbase pathfix pkgconfig python:build tar:bzip2
USE_GNOME=	cairo gtk20 intltool

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

CONFIGURE_ARGS=	--disable-nls --disable-vte --disable-shared --disable-plugins \
		--enable-gtk2

post-patch:
	@${REINPLACE_CMD} -e '/^SUBDIRS/ s|doc||' -e '/^SUBDIRS/ s|po||' \
		${WRKSRC}/Makefile.in

post-install:
	${RM} -f ${STAGEDIR}${PREFIX}/lib/libgeany.a

.include <bsd.port.mk>

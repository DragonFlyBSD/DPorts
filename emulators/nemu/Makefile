PORTNAME=	nemu
DISTVERSIONPREFIX=	v
DISTVERSION=	3.5.0
CATEGORIES=	emulators

MAINTAINER=	arrowd@FreeBSD.org
COMMENT=	Ncurses UI for QEMU
WWW=		https://github.com/nemuTUI/nemu

LICENSE=	BSD2CLAUSE

LIB_DEPENDS=	libudev.so:devel/libudev-devd \
		libjson-c.so:devel/json-c

USES=		cmake gettext-runtime gettext-tools gnome libarchive pkgconfig \
		sqlite

USE_GITHUB=	yes
GH_ACCOUNT=	nemuTUI

USE_GNOME=	libxml2

USES+= ncurses
IGNORE= unmaintained, please request fixing to users mailing list
dfly-patch:
	${REINPLACE_CMD} -e 's@<ncursesw/@<ncurses/@g' \
		${WRKSRC}/src/nm_form.h \
		${WRKSRC}/src/nm_ncurses.h
	${REINPLACE_CMD} -e 's@STREQUAL FreeBSD@MATCHES "FreeBSD|DragonFly"@g' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>

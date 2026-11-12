PORTNAME=	multitail
PORTVERSION=	7.1.6
CATEGORIES=	sysutils

MAINTAINER=	laszlo@karolyi.hu
COMMENT=	Tail multiple files on console with ncurses
WWW=		https://www.vanheusden.com/multitail/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libgnuregex.so:devel/libgnuregex

USES=		cmake ncurses:port pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	folkertvanheusden

PLIST_FILES=	bin/multitail \
		etc/multitail.conf.sample \
		share/man/man1/multitail.1.gz
PORTDOCS=	LICENSE README.md

OPTIONS_DEFINE=	DOCS

CMAKE_ARGS= -DCURSES_INCLUDE_PATH=${NCURSESINC} -DCURSES_NCURSES_LIBRARY=${NCURSESLIB}/libncursesw.so
do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/.build/multitail ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/multitail.1 ${STAGEDIR}${PREFIX}/share/man/man1
	${INSTALL_DATA} ${WRKSRC}/multitail.conf ${STAGEDIR}${PREFIX}/etc/multitail.conf.sample
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/LICENSE ${STAGEDIR}${DOCSDIR}

dfly-patch:
	${REINPLACE_CMD} -e 's/find_library(PANEL_LIBRARY panelw REQUIRED)/find_library(PANEL_LIBRARY panel REQUIRED)/' \
		${WRKSRC}/CMakeLists.txt
	${REINPLACE_CMD} -e 's/defined(__FreeBSD__)/(defined(__FreeBSD__) || defined(__DragonFly__))/g' \
		${WRKSRC}/*.c ${WRKSRC}/*.h

.include <bsd.port.mk>

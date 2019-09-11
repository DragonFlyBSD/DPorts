PORTNAME=	gdb
PKGNAMESUFFIX=	761
PORTVERSION=	7.6.1
CATEGORIES=	devel
MASTER_SITES=	GNU

MAINTAINER=	zrj@efnet.irc
COMMENT=	KGDB version from previous DragonFly versions

LICENSE=	GPLv3

BUILD_DEPENDS=	ncurses>=0:devel/ncurses
RUN_DEPENDS=	ncurses>=0:devel/ncurses

LDFLAGS+=	-L${LOCALBASE}/lib

post-patch:
	${CP} -v ${FILESDIR}/gdb/* ${WRKSRC}/gdb/
	${CP} -v ${FILESDIR}/kgdb/* ${WRKSRC}/kgdb/kgdb/
	${LN} -s ${LOCALBASE}/include/ncurses ${WRKSRC}/ncurses

do-configure:
	@echo nothing to configure

do-build:
	(cd ${WRKSRC}/kgdb; ${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS})

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/kgdb/gdb/gdb761 ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/kgdb/kgdb/kgdb761 ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/kgdb/kgdb/kgdb761.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>

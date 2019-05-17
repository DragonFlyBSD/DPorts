
PORTNAME=	libmd
PORTVERSION=	3.0
CATEGORIES=	security
MASTER_SITES=	https://avalon.dragonflybsd.org/misc/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	dports@ef.irc
COMMENT=	Obsolete libmd library.

USES=		ssl

LICENSE=	BSD3CLAUSE
MAEKFILE=	Makefile

CFLAGS+=	-I${OPENSSLINC}
LDFLAGS+=	-L${OPENSSLLIB}

do-install:
	${INSTALL_LIB} ${WRKSRC}/libmd.a ${STAGEDIR}${PREFIX}/lib
	${INSTALL_LIB} ${WRKSRC}/libmd.so.3 ${STAGEDIR}${PREFIX}/lib
	${RLN} ${STAGEDIR}${PREFIX}/lib/libmd.so.3 ${STAGEDIR}${PREFIX}/lib/libmd.so
	${INSTALL_DATA} ${WRKSRC}/md2.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/md4.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/md5.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/sha.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/sha256.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/sha512.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/ripemd.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_MAN} ${WRKSRC}/md2.3 ${STAGEDIR}${MANPREFIX}/man/man3
	${INSTALL_MAN} ${WRKSRC}/md4.3 ${STAGEDIR}${MANPREFIX}/man/man3
#	${INSTALL_MAN} ${WRKSRC}/md5.3 ${STAGEDIR}${MANPREFIX}/man/man3
	${INSTALL_MAN} ${WRKSRC}/sha256.3 ${STAGEDIR}${MANPREFIX}/man/man3
	${INSTALL_MAN} ${WRKSRC}/sha512.3 ${STAGEDIR}${MANPREFIX}/man/man3

.include <bsd.port.mk>

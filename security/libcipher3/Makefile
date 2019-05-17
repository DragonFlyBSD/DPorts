
PORTNAME=	libcipher3
PORTVERSION=	3.0
CATEGORIES=	security
MASTER_SITES=	https://avalon.dragonflybsd.org/misc/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION}


MAINTAINER=	dports@ef.irc
COMMENT=	FreeSec 1.0 Crypt Library

LICENSE=	BSD3CLAUSE
MAEKFILE=	Makefile
NO_WRKSUBDIR=	yes

do-install:
	${INSTALL_LIB} ${WRKSRC}/libcipher.a ${STAGEDIR}${PREFIX}/lib
	${INSTALL_LIB} ${WRKSRC}/libcipher.so.3 ${STAGEDIR}${PREFIX}/lib
	${RLN} ${STAGEDIR}${PREFIX}/lib/libcipher.so.3 ${STAGEDIR}${PREFIX}/lib/libcipher.so
	${INSTALL_DATA} ${WRKSRC}/libcipher3.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_MAN} ${WRKSRC}/cipher.3 ${STAGEDIR}${MANPREFIX}/man/man3

.include <bsd.port.mk>

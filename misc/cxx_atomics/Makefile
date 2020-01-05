PORTNAME=	cxx_atomics
PORTVERSION=	8.0
CATEGORIES=	misc

MAINTAINER=	zrj@efnet.irc
COMMENT=	Extracted <stdatomic.h> and libatomic.a

LICENSE=	GPLv3RLE

DISTFILES=

BUILD_DEPENDS=	gcc8>0:lang/gcc8

do-configure:

do-build:

do-install:
	${MKDIR} -p ${STAGEDIR}${PREFIX}/cxx_atomics
	${INSTALL_DATA} ${LOCALBASE}/lib/gcc8/gcc/x86_64-*/8.*/include/stdatomic.h \
		${STAGEDIR}${PREFIX}/cxx_atomics/stdatomic.h
	${INSTALL_DATA} ${LOCALBASE}/lib/gcc8/libatomic.a \
		${STAGEDIR}${PREFIX}/cxx_atomics/libatomic.a

.include <bsd.port.mk>

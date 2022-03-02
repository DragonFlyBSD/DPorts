PORTNAME=	llvm-libs-mesa
PORTVERSION=	13.0.1
CATEGORIES=	graphics

MAINTAINER=	zrj@efnet.irc
COMMENT=	Main llvm lib to reduce runtime dependencies

LICENSE=	APACHE20

DISTFILES=

BUILD_DEPENDS=	llvm-mesa>0:graphics/llvm-mesa

do-configure:

do-build:

do-install:
	${MKDIR} -p ${STAGEDIR}${PREFIX}/lib
	${CP} -av ${LOCALBASE}/llvm-mesa/lib/libLLVM-mesa-13.so \
		${STAGEDIR}${PREFIX}/lib/

.include <bsd.port.mk>

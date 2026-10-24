PORTNAME=	blend2d
DISTVERSION=	g20260703
CATEGORIES=	graphics

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	2D Vector Graphics Engine Powered by a JIT Compiler
WWW=		https://blend2d.com/

LICENSE=	ZLIB
LICENSE_FILE=	${WRKSRC}/LICENSE.md

USES=		cmake localbase
USE_GITHUB=	yes
GH_TAGNAME=	6dbc2cefbc996379e07104e34519a440b49b15d7
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DBLEND2D_NO_JIT=ON

dfly-patch:
	${REINPLACE_CMD} -e 's@\(BLEND2D_NO_STDCXX\) 1@\1 0@g' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>

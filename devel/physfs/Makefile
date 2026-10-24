PORTNAME=	physfs
PORTVERSION=	3.2.0
DISTVERSIONPREFIX=	release-
CATEGORIES=	devel

MAINTAINER=	oliver@FreeBSD.org
COMMENT=	Library to provide abstract access to various archives

LICENSE=        ZLIB
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		cmake readline tar:bzip2
USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	icculus

dfly-patch:
	${REINPLACE_CMD} -e 's/-Werror//g' ${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>

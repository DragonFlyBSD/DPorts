PORTNAME=	marblemarcher
DISTVERSION=	1.4.6
CATEGORIES=	games

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Marble Marcher: Community Edition
WWW=		https://github.com/WAUthethird/Marble-Marcher-Community-Edition

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS= glm>0:math/glm cxxfs_gcc8>0:misc/cxxfs_gcc8
LIB_DEPENDS=	libAntTweakBar.so:graphics/anttweakbar \
		libsfml-system.so:multimedia/sfml2

USES=		cmake compiler:c++17-lang eigen:3 gl localbase:ldflags
USE_GL=		gl glew glu

USE_GITHUB=	yes
GH_ACCOUNT=	WAUthethird
GH_PROJECT=	Marble-Marcher-Community-Edition

CMAKE_ARGS=	-DFREEBSD_DATADIR=${DATADIR}

CXXFLAGS= -isystem ${LOCALBASE}/cxxfs_gcc8
LDFLAGS= -L${LOCALBASE}/cxxfs_gcc8
post-install:
	@(echo "#!/bin/sh"; \
	  echo ""; \
	  echo "cd ${DATADIR} && ./MarbleMarcher \"$$"@"\"" \
	) > ${STAGEDIR}${PREFIX}/bin/MarbleMarcher
	@${CHMOD} +x ${STAGEDIR}${PREFIX}/bin/MarbleMarcher

dfly-patch:
	${REINPLACE_CMD} -e 's@#stdc++fs@stdc++fs@g' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>

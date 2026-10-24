PORTNAME=	LAStools
DISTVERSIONPREFIX=	v
DISTVERSION=	2.0.5
CATEGORIES=	misc

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Efficient tools for LiDAR processing
WWW=		https://rapidlasso.com/lastools/ \
		https://github.com/LAStools/LAStools

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING.txt

USES=		cmake:insource
USE_GITHUB=	yes

CMAKE_ON=	BUILD_SHARED_LIBS

CONFLICTS_INSTALL=	liblas

EXECUTABLES=	lasindex las2txt las2las txt2las lasdiff lasinfo lasmerge lasprecision lasvalidate laszip

BUILD_DEPENDS= cxxfs_gcc8>0:misc/cxxfs_gcc8
CXXFLAGS= -isystem ${LOCALBASE}/cxxfs_gcc8
LDFLAGS= -L${LOCALBASE}/cxxfs_gcc8
xpre-install:
	${MV} ${WRKSRC}/LASlib/src/LASlib-config.cmake ${WRKSRC}/LASlib/src/laslib-config.cmake

post-install: # strip the "64" suffix from executables
.for e in ${EXECUTABLES}
	${MV} ${STAGEDIR}${PREFIX}/bin/${e}64 ${STAGEDIR}${PREFIX}/bin/${e}
.endfor

dfly-patch:
	${REINPLACE_CMD} -e 's@CMAKE_DL_LIBS})@CMAKE_DL_LIBS} stdc++fs)@' ${WRKSRC}/src/CMakeLists.txt
	${ECHO_CMD} 'target_link_libraries(LASlib stdc++fs)' >> ${WRKSRC}/LASlib/src/CMakeLists.txt

.include <bsd.port.mk>

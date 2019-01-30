# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD$

PORTNAME?=	libc++
DISTNAME=	libc++-${PORTVERSION}
PORTVERSION=	6.0.1
CATEGORIES=	devel
MASTER_SITES=	https://avalon.dragonflybsd.org/misc/distfiles/ \

MAINTAINER=	tuxillo@quantumachine.net
COMMENT?=	LLVM C++ standard library with c++11 support

USES=		tar:xz

.ifndef MASTERDIR
LICENSE_GROUP=	MIT UIUC
LICENSE_NAME_UIUC=	University of Illinois/NCSA Open Source License
LICENSE_PERMS_UIUC=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

USES+=		cmake compiler:c++11-lang
USE_LDCONFIG=	yes
LDFLAGS+=	-L${LOCALBASE}/lib

CXXRT_INCS=	${LOCALBASE}/include/cxxrt/
CXXRT_LIB=	${LOCALBASE}/lib/libcxxrt.so
LIB_DEPENDS+=	libcxxrt.so:devel/libcxxrt

.include <bsd.port.options.mk>

CMAKE_ARGS=	-DLIBCXX_CXX_ABI=libcxxrt -DLIBCXX_CXX_ABI_INCLUDE_PATHS=${CXXRT_INCS}


post-install:
	${LN} -sf c++/v1 ${STAGEDIR}${PREFIX}/include/c++/v1/tr1
	${RM} ${STAGEDIR}${PREFIX}/lib/libc++.so
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/c++/
	${ECHO} 'GROUP ( ${PREFIX}/lib/libc++.so.1 ${CXXRT_LIB} ${EXTRALIB})' > ${STAGEDIR}${PREFIX}/lib/libc++.so
	${ECHO} 'GROUP ( ${PREFIX}/lib/libc++.so.1 ${CXXRT_LIB} ${EXTRALIB})' > ${STAGEDIR}${PREFIX}/lib/c++/libstdc++.so

regression-test: build
	cd ${WRKSRC}/test && ${SH} ./testit

.endif
.include <bsd.port.mk>

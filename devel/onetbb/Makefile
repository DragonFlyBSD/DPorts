PORTNAME=	onetbb
DISTVERSIONPREFIX=	v
DISTVERSION=	2023.1.0
CATEGORIES=	devel

MAINTAINER=	martymac@FreeBSD.org
COMMENT=	Library that provides thread building blocks
WWW=		https://software.intel.com/oneapi/onetbb

LICENSE=	APACHE20

LIB_DEPENDS=	libhwloc.so:devel/hwloc2

USES=		cmake:testing compiler:c++11-lang localbase:ldflags pathfix pkgconfig
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	uxlfoundation
GH_PROJECT=	oneTBB

CONFLICTS=	tbb

# Many symbols in the linker version scripts are undefined because link time
# optimization (-flto=thin) removes them. Suppress errors with lld >= 17 due to
# these undefined symbols.
LDFLAGS+=	-Wl,--undefined-version

# Pkgconfig: tbb.pc (on 64bit arch) vs tbb32.pc
PLIST_SUB=	DBGSUFX="${DBGSUFX}" \
		PCSUFX="${PCSUFX}"

PORTDOCS=	README.md

CMAKE_TESTING_ON=	TBB_TEST

CMAKE_OFF=	TBB_STRICT \
		TBB_TEST
CMAKE_ARGS=	-DCMAKE_INSTALL_DOCDIR:PATH="${DOCSDIR}"

OPTIONS_DEFINE=	DOCS

DFLY_PLIST= ${WRKSRC}/pkg-plist
PLIST= ${DFLY_PLIST}
.include <bsd.port.pre.mk>

.if defined(WITH_DEBUG)
DBGSUFX=	_debug
.endif

.if ${ARCH} == i386 || ${ARCH} == powerpc || ${ARCH:Marmv?}
PCSUFX=		32
.endif
LIB_DEPENDS:= ${LIB_DEPENDS:Nlibhwloc*}
dfly-patch:
	${CP} -v ${.CURDIR:H}/onetbb/pkg-plist ${DFLY_PLIST}
	${REINPLACE_CMD} -e '/libtbbbind/d' ${DFLY_PLIST}

.include <bsd.port.post.mk>

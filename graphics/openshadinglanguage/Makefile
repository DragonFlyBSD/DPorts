# Created by: Shane Ambler <FreeBSD@Shaneware.biz>
# $FreeBSD$

PORTNAME=	openshadinglanguage
PORTVERSION=	1.7.2
DISTVERSIONPREFIX=	Release-
PORTREVISION=	2
CATEGORIES=	graphics devel

MAINTAINER=	FreeBSD@Shaneware.biz
COMMENT=	Advanced shading language for production GI renderers

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	llvm-config35:devel/llvm35 \
		clang35>=3.5:lang/clang35
LIB_DEPENDS=	libboost_thread.so:devel/boost-libs \
		libIlmImf.so:graphics/OpenEXR \
		libOpenImageIO.so:graphics/openimageio
RUN_DEPENDS=	llvm-config35:devel/llvm35

USE_GITHUB=	yes
GH_ACCOUNT=	imageworks
GH_PROJECT=	OpenShadingLanguage

CMAKE_ARGS=	-DLLVM_CONFIG:STRING="${LOCALBASE}/bin/llvm-config35" \
		-DSTOP_ON_WARNING=OFF \
		-DOSL_BUILD_CPP11=1 \
		-DENABLERTTI:BOOL=ON
USE_LDCONFIG=	yes
USES=		bison cmake:outsource compiler:c11

.include <bsd.port.options.mk>

.if ${ARCH} == powerpc
USE_GCC=	yes
.endif

.if ${OSVERSION} < 1000033
BUILD_DEPENDS+=	flex>=2.5.37:textproc/flex
CMAKE_ARGS+=	-DFLEX_EXECUTABLE:STRING=${LOCALBASE}/bin/flex
CXXFLAGS+=	-I${LOCALBASE}/include/flex
.endif

post-patch:
	@${REINPLACE_CMD} -e 's,/bin/bash,/bin/sh,' \
		${WRKSRC}/src/liboslexec/serialize-bc.bash

.include <bsd.port.mk>

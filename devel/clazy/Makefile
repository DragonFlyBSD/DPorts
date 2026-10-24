PORTNAME=	clazy
DISTVERSIONPREFIX=	v
DISTVERSION=	1.17.1
CATEGORIES=	devel kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${DISTVERSION}/src/

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt oriented code checker based on clang
WWW=		https://github.com/KDE/clazy

LICENSE=	LGPL20
LICENSE_FILE=	${WRKSRC}/LICENSES/LGPL-2.0-or-later.txt

USES=		cmake llvm:lib,noexport perl5 tar:xz
USE_PERL5=	build

CMAKE_ARGS= -DLLVM_ROOT=${LLVM_PREFIX} -DUSER_LIBS:STRING="stdc++fs"

WRKSRC=		${WRKDIR}/${PORTNAME}-v${DISTVERSION}

OPTIONS_DEFINE=	DOCS

BUILD_DEPENDS= cxxfs_gcc8>0:misc/cxxfs_gcc8
CXXFLAGS= -isystem ${LOCALBASE}/cxxfs_gcc8
LDFLAGS= -L${LOCALBASE}/cxxfs_gcc8 -lstdc++fs
.include <bsd.port.mk>

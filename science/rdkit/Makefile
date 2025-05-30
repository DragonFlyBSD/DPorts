PORTNAME=	rdkit
DISTVERSIONPREFIX=	Release_
DISTVERSION=	2023_09_3
CATEGORIES=	science
MASTER_SITES=	https://fonts.google.com/download?family=Comic%20Neue&dummy=/:font
DISTFILES=	Comic_Neue.zip:font
DIST_SUBDIR=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Collection of cheminformatics and machine-learning software
WWW=		https://www.rdkit.org/

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/license.txt

BROKEN_i386=	non-constant-expression cannot be narrowed from type 'unsigned int' to 'npy_intp', see https://github.com/rdkit/rdkit/issues/4934
BROKEN_FreeBSD_14=	fails to compile as clang crashes, see https://bugs.freebsd.org/bugzilla/show_bug.cgi?id=272652
BROKEN_FreeBSD_15=	fails to compile as clang crashes, see https://bugs.freebsd.org/bugzilla/show_bug.cgi?id=272652

BUILD_DEPENDS=	catch>0:devel/catch \
		flex:textproc/flex \
		rapidjson>=0:devel/rapidjson
LIB_DEPENDS=	libboost_system.so:devel/boost-libs \
		libcoordgen.so:science/coordgenlibs \
		libfreetype.so:print/freetype2 \
		libmaeparser.so:science/maeparser

USES=		bison:build cmake compiler:c++11-lang eigen:3 python
USE_GITHUB=	yes
GH_TUPLE=	rareylab:RingDecomposerLib:v1.1.3_rdkit:RingDecomposerLib/External/RingFamilies/RingDecomposerLib
USE_LDCONFIG=	yes

CMAKE_OFF=	RDK_INSTALL_INTREE RDK_USE_FLEXBISON \
		RDK_INSTALL_STATIC_LIBS RDK_SWIG_STATIC RDK_PGSQL_STATIC \
		RDK_OPTIMIZE_NATIVE \
		RDK_BUILD_CPP_TESTS
CMAKE_ARGS=	-DCATCH_DIR=${LOCALBASE}/include/catch2

DATADIR=	${PREFIX}/share/RDKit
DOCSDIR=	${PREFIX}/share/doc/RDKit

PLIST_SUB=	SHLIB_VER=${PORTVERSION}

OPTIONS_DEFINE=		DOCS PGSQL PYTHON
OPTIONS_DEFAULT=	PYTHON
OPTIONS_SUB=		yes

DOCS_CMAKE_BOOL=	FREEBSD_INSTALL_DOCS
DOCS_CMAKE_ON=		-DFREEBSD_DOCSDIR:PATH=${DOCSDIR}

PGSQL_USES=		pgsql
PGSQL_DESC=		Build the PostgreSQL cartridge
PGSQL_CMAKE_BOOL=	RDK_BUILD_PGSQL

PYTHON_CMAKE_BOOL=	RDK_BUILD_PYTHON_WRAPPERS
PYTHON_BUILD_DEPENDS=	${PYNUMPY}
PYTHON_LIB_DEPENDS=	${PY_BOOST}
PYTHON_RUN_DEPENDS=	${PYNUMPY} \
			${PY_PILLOW} \
			${PYTHON_PKGNAMEPREFIX}matplotlib>0:math/py-matplotlib@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}reportlab>0:print/py-reportlab@${PY_FLAVOR}

PORTDOCS=	*

.include <bsd.port.options.mk>

.if ${ARCH} == aarch64 || ${ARCH} == x86_64 || ${ARCH:Marm*} || ${ARCH} == i386 || ${ARCH:Mmips*el*} || ${ARCH} == riscv
PLIST_SUB+=	LITTLE_ENDIAN=""
.else
PLIST_SUB+=	LITTLE_ENDIAN="@comment "
.endif

post-extract:
	@${MKDIR} ${WRKSRC}/External/rapidjson-1.1.0
	@cd ${WRKSRC}/External/rapidjson-1.1.0 && ${LN} -s ${LOCALBASE}/include/rapidjson include
	@cd ${WRKSRC}/Data/Fonts && unzip ${DISTDIR}/${DIST_SUBDIR}/Comic_Neue.zip

post-install-PGSQL-on:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/postgresql/rdkit.so

.include <bsd.port.mk>

PORTNAME=	io
PORTVERSION=	20240207
PORTREVISION=	2
CATEGORIES=	lang
PKGNAMESUFFIX=	-devel

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	Small prototype-based programming language (devel version)
WWW=		https://iolanguage.org/

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

CONFLICTS=	io

USES=		cmake:noninja compiler:c11

USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	IoLanguage
GH_TAGNAME=	7113659c4342e98e9a86482b25441775fa066a96

GH_TUPLE+=	kgabis:parson:4f3eaa6:parson/deps/parson

MAKE_JOBS_UNSAFE=	yes

CMAKE_ARGS=	-DWITHOUT_EERIE:BOOL=ON

.include <bsd.port.pre.mk>

# disable SSE on non-x86 archs
.if ${ARCH} != x86_64 && ${ARCH} != i386
EXTRA_PATCHES+= ${PATCHDIR}/extra-patch-CMakeLists.txt
.endif

do-test:
	cd ${BUILD_WRKSRC} && \
	    ./_build/binaries/io ${WRKSRC}/libs/iovm/tests/correctness/run.io

.include <bsd.port.post.mk>

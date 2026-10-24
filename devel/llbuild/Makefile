PORTNAME=		llbuild
DISTVERSIONPREFIX=	swift-DEVELOPMENT-
DISTVERSION=		SNAPSHOT-2017-12-10
DISTVERSIONSUFFIX=	-a
PORTREVISION=		1
CATEGORIES=		devel

MAINTAINER=	jonathan@FreeBSD.org
COMMENT=	Low-level build system, used by the Swift Package Manager
WWW=		https://github.com/apple/swift-llbuild

LICENSE=	APACHE20 BSD3CLAUSE NCSA
LICENSE_COMB=	multi
LICENSE_FILE_APACHE20=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libsqlite3.so:databases/sqlite3

USES= cmake ncurses

USE_GITHUB=	yes
GH_ACCOUNT=	apple
GH_PROJECT=	swift-llbuild

USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOCS

PORTDOCS=	CONTRIBUTING.md README.md

USE_CLANG_FALLBACK= default
post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

dfly-patch:
	${REINPLACE_CMD} -e 's@[[:<:]]curses[[:>:]]@ncurses@'	\
		${WRKSRC}/products/llbuild/CMakeLists.txt	\
		${WRKSRC}/products/libllbuild/CMakeLists.txt	\
		${WRKSRC}/products/swift-build-tool/CMakeLists.txt \
		${WRKSRC}/unittests/Core/CMakeLists.txt		\
		${WRKSRC}/unittests/Basic/CMakeLists.txt	\
		${WRKSRC}/unittests/BuildSystem/CMakeLists.txt	\
		${WRKSRC}/unittests/Ninja/CMakeLists.txt

.include <bsd.port.mk>

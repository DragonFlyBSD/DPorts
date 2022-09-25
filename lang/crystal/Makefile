PORTNAME=	crystal
DISTVERSION=	1.5.1
CATEGORIES=	lang
MASTER_SITES=	https://github.com/mneumann/crystal-bootstrap-dragonfly/releases/download/1.5.1-p0/:bootstrap
DISTFILES=	crystal.o:bootstrap
DIST_SUBDIR=	${PORTNAME}
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	mneumann@ntecs.de
COMMENT=	Language with Ruby-like syntax and static type checking
WWW=		https://crystal-lang.org

LICENSE=	APACHE20

BUILD_DEPENDS=	${LOCALBASE}/bin/llvm-config${LLVM_VERSION}:devel/llvm${BOOTSTRAP_LLVM_VERSION} \
		git:devel/git
LIB_DEPENDS=	libgc-threaded.so:devel/boehm-gc-threaded \
		libevent.so:devel/libevent \
		libpcre.so:devel/pcre \
		libLLVM-${LLVM_VERSION:C/^([6-9])0/\1/:S/-devel/15/}.so:devel/llvm${LLVM_VERSION}
RUN_DEPENDS=	pkg-config:devel/pkgconf

USES=		compiler gmake pkgconfig ssl

USE_GITHUB=	yes
GH_ACCOUNT=	crystal-lang

LLVM_VERSION?=	14
BOOTSTRAP_LLVM_VERSION=	14

LLVM_CONFIG="${LOCALBASE}/bin/llvm-config${LLVM_VERSION}"

MAKE_ARGS=	SHELL=sh \
		LLVM_CONFIG="${LLVM_CONFIG}" \
		FLAGS="--release --no-debug --progress --threads=${MAKE_JOBS_NUMBER}" \
		EXPORTS='CRYSTAL_CONFIG_PATH="lib:${PREFIX}/lib/${PORTNAME}"' \
		CRYSTAL=".build/crystal-bootstrap" \
		CRYSTAL_CACHE_DIR="${WRKDIR}/cache" \
		CRYSTAL_CONFIG_VERSION="${DISTVERSION}"

TEST_TARGET=	spec

PORTDOCS=	*
PORTEXAMPLES=	*

OPTIONS_DEFINE=		DOCS EXAMPLES BASH ZSH
OPTIONS_DEFAULT=	BASH ZSH
OPTIONS_SUB=		yes

.include <bsd.port.options.mk>

# crystal needs pkgconfig to determine SSL variants but these are not
# present in FreeBSD base. We splice in the correct info based on
# FreeBSD version and hope it doesn't change during minor releases.
# See post-patch for the substitutions of these patches.
.if ${SSL_DEFAULT} == "base"
EXTRA_PATCHES=	${PATCHDIR}/extra-patch-src_openssl_lib__crypto.cr \
		${PATCHDIR}/extra-patch-src_openssl_lib__ssl.cr
.endif

post-extract:
	${MKDIR} ${WRKSRC}/.build
	${CP} ${DISTDIR}/${DIST_SUBDIR}/crystal.o ${WRKSRC}/.build/crystal.o

post-patch:
.if ${SSL_DEFAULT} == "base"
	@${REINPLACE_CMD} -i '' \
		-e 's|CRYSTAL_SSL_VERSION|1.1.1|g' \
		-e 's|CRYSTAL_SSL_LDFLAGS|${OPENSSLLIB}|g' \
		${WRKSRC}/src/openssl/lib_ssl.cr \
		${WRKSRC}/src/openssl/lib_crypto.cr
.endif

pre-build:
	cd ${WRKSRC} && ${SETENV} LLVM_CONFIG="${LLVM_CONFIG}" ${MAKE_CMD} llvm_ext
	cd ${WRKSRC} && ${CC} -o .build/crystal-bootstrap  \
		.build/crystal.o src/llvm/ext/llvm_ext.o \
		-rdynamic \
		`${LLVM_CONFIG} --libs --system-libs --ldflags 2> /dev/null` \
		-lstdc++ -lpcre -lm -lgc-threaded -lpthread -L/usr/local/lib -levent

do-build-DOCS-on:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} docs \
			CRYSTAL_CACHE_DIR="${WRKDIR}/cache"

do-install:
	${INSTALL_PROGRAM} ${INSTALL_WRKSRC}/.build/crystal ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_MAN} ${INSTALL_WRKSRC}/man/crystal.1 ${STAGEDIR}${MANPREFIX}/man/man1/
	(cd ${INSTALL_WRKSRC}/src && ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/lib/${PORTNAME})

do-install-DOCS-on:
	(cd ${INSTALL_WRKSRC}/docs && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR})

do-install-EXAMPLES-on:
	(cd ${INSTALL_WRKSRC}/samples && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR})

do-install-BASH-on:
	${MKDIR} ${STAGEDIR}${LOCALBASE}/etc/bash_completion.d
	${INSTALL_DATA} ${INSTALL_WRKSRC}/etc/completion.bash \
			${STAGEDIR}${LOCALBASE}/etc/bash_completion.d/_crystal.bash

do-install-ZSH-on:
	${MKDIR} ${STAGEDIR}${LOCALBASE}/share/zsh/site-functions
	${INSTALL_DATA} ${INSTALL_WRKSRC}/etc/completion.zsh \
			${STAGEDIR}${LOCALBASE}/share/zsh/site-functions/_crystal

.include <bsd.port.mk>

PORTNAME=	mono
PORTVERSION=	5.10.1.57
PORTREVISION=	4
CATEGORIES=	lang
MASTER_SITES=	https://download.mono-project.com/sources/mono/
DISTFILES=	${PORTNAME}-${PORTVERSION}${EXTRACT_SUFX}

MAINTAINER=	mono@FreeBSD.org
COMMENT=	Open source implementation of .NET Development Framework
WWW=		https://www.mono-project.com/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=	aarch64 amd64 armv6 armv7 i386 powerpc powerpc64 powerpc64le

BUILD_DEPENDS=	p5-XML-Parser>=0:textproc/p5-XML-Parser \
		bash:shells/bash \
		cmake-core>0:devel/cmake-core
LIB_DEPENDS=	libinotify.so:devel/libinotify
RUN_DEPENDS=	${PY_PILLOW} \
		ca_root_nss>=0:security/ca_root_nss

CONFLICTS_INSTALL=	certmgr coin-or-disco disco mono[0-9]*

OPTIONS_DEFINE=		MONOLITE NLS X11
OPTIONS_DEFAULT=	MONOLITE X11
OPTIONS_SUB=	yes

MONOLITE_DESC=		Use monolite to bootstrap mcs (otherwise use installed mcs)
MONOLITE_DISTFILES=	monolite-linux-${MONOLITE_VERSION}-latest.tar.gz:monolite
MONOLITE_MASTER_SITES=	http://download.mono-project.com/monolite/:monolite
MONOLITE_VERSION=	1051000004

NLS_CONFIGURE_OFF=	--disable-nls
NLS_USES=	gettext

X11_USES=	display:test

USES=	autoreconf bison compiler:c11 cpe gmake iconv libtool \
	pathfix perl5 python shebangfix tar:bzip2
USE_PERL5=	build
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
SHEBANG_FILES=	scripts/mono-heapviz mono/mini/genmdesc.py mono/tests/test_lldb.py
BINARY_ALIAS=	python=${PYTHON_CMD}

CONFIGURE_ARGS=	--disable-dtrace
CONFIGURE_ENV=	ac_cv_header_sys_inotify_h=no

MAKE_ENV=	MONO_SHARED_DIR="${WRKDIR}" \
		INSTALL_STRIP_FLAG="${STRIP}" \
		TZ=UTC

TEST_ARGS=	-k
TEST_TARGET=	check

PORTSCOUT=	limit:^\d+\.\d+\.[1-9]\d*

LOCALBASE?=	/usr/local
.if !exists(${LOCALBASE}/bin/mcs)
OPTIONS_SLAVE=	MONOLITE
.endif

.include <bsd.port.options.mk>

.if ${ARCH} == aarch64
EXTRA_PATCHES=	${FILESDIR}/extra-patch-aarch64-race-workaround
PLIST=	${.CURDIR}/pkg-plist.aarch64
.endif

.if ${ARCH:Mpowerpc*}
PLIST+=	${.CURDIR}/pkg-plist.powerpc
.else
CONFIGURE_ARGS+=	--enable-btls
.endif

post-extract-MONOLITE-on:
	${MKDIR} ${WRKSRC}/mcs/class/lib/monolite-linux
	${MV} ${WRKDIR}/monolite-linux-${MONOLITE_VERSION}-latest ${WRKSRC}/mcs/class/lib/monolite-linux/${MONOLITE_VERSION}

post-patch:
	${REINPLACE_CMD} -e 's|^#!/bin/bash|#!/usr/bin/env bash|g' \
		${WRKSRC}/scripts/mono-find-provides.in \
		${WRKSRC}/scripts/mono-find-requires.in \
		${WRKSRC}/scripts/mono-test-install
	${FIND} ${WRKSRC} -name '*.sh' | ${XARGS} ${REINPLACE_CMD} \
		-e 's|^#!/bin/bash|#!/bin/sh|g'
	${SED} 's/tarball/${PORTVERSION}/' ${WRKSRC}/mono/mini/Makefile.am.in \
		> ${WRKSRC}/mono/mini/Makefile.am
	${REINPLACE_CMD} -e 's|/usr/share|${PREFIX}|g' \
		${WRKSRC}/mcs/class/corlib/System/Environment.cs \
		${WRKSRC}/external/corefx/src/System.Runtime.Extensions/src/System/Environment.Unix.cs
	${REINPLACE_CMD} -e 's|/usr/share/.mono|${PREFIX}/share/mono|g' \
		${WRKSRC}/man/mono-configuration-crypto.1 \
		${WRKSRC}/man/mono.1 \
		${WRKSRC}/man/mozroots.1

post-configure:
	${REINPLACE_CMD} -e 's|share\/man|man|g' \
		${WRKSRC}/mcs/jay/Makefile

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/mono

.include <bsd.port.mk>

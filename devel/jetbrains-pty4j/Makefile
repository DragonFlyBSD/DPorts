PORTNAME=	pty4j
PORTVERSION=	0.12.11
CATEGORIES=	devel java
PKGNAMEPREFIX=	jetbrains-
DIST_SUBDIR=	jetbrains

MAINTAINER=	dmitry.wagin@ya.ru
COMMENT=	Pty4J's native library
WWW=		https://github.com/JetBrains/pty4j

LICENSE=	EPL
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gmake

USE_GITHUB=	yes
GH_ACCOUNT=	JetBrains
GH_PROJECT=	pty4j
GH_TAGNAME=	7488f35f79bcd9801ce5ff68afc98a3f43bb97fa

.include <bsd.port.options.mk>

# The directory we need to install Pty4J's native library in depends
# on the install target's architecture.  We rebuild libpty.so instead
# of using one of the bundled ones which are FreeBSD 10.x only.
.if ${ARCH} == "x86_64"
PTY4J_ARCH=	x86-64
.elif ${ARCH} == "i386"
PTY4J_ARCH=	x86
.else
PTY4J_ARCH=
.endif

.if ${PTY4J_ARCH} != ""
# Despite what the name might suggest using the linux_x86_64 target
# will always build libpty.so for the native platform.
BUILD_WRKSRC=	${WRKSRC}/native
MAKEFILE=	Makefile_freebsd
ALL_TARGET=	linux_x86_64
PLIST_FILES+=	lib/pty4j/freebsd/${PTY4J_ARCH}/libpty.so
.else
# If native Pty4J support is missing.
NO_BUILD=	yes
.endif

do-install:
.if ${PTY4J_ARCH} != ""
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/pty4j/freebsd/${PTY4J_ARCH}
# See above why we always use freebsd/x86-64/ here
	${INSTALL_LIB} ${WRKSRC}/os/freebsd/x86-64/libpty.so ${STAGEDIR}${PREFIX}/lib/pty4j/freebsd/${PTY4J_ARCH}/
.endif

.include <bsd.port.mk>

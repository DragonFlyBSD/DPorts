PORTNAME=	gcc
PORTVERSION?=	11.3.0
PORTREVISION=	3
CATEGORIES=	devel
MASTER_SITES=	GCC
PKGNAMEPREFIX?=	aarch64-none-elf-

MAINTAINER=	manu@FreeBSD.org
COMMENT?=	GNU Compiler Collection for bare metal aarch64 cross-development
WWW=		https://gcc.gnu.org/

LICENSE=	GPLv3 GPLv3RLE
LICENSE_COMB=	multi

BROKEN_mips=		configure: error: cannot compute suffix of object files: cannot compile
BROKEN_mips64=		configure: error: cannot compute suffix of object files: cannot compile

LIB_DEPENDS=	libgmp.so:math/gmp \
		libmpfr.so:math/mpfr \
		libmpc.so:math/mpc
BUILD_DEPENDS=	${GCC_TARGET}-as:devel/binutils@${PKGNAMEPREFIX:C/-$//:C/-/_/g} \
		objdump:devel/binutils@native
RUN_DEPENDS=	${GCC_TARGET}-as:devel/binutils@${PKGNAMEPREFIX:C/-$//:C/-/_/g}

USES=		cpe gmake iconv libtool tar:xz makeinfo compiler:c++11-lang
CPE_VENDOR=	gnu

PLIST_SUB+=	TARGETARCH=${PKGNAMEPREFIX:C/-//g} \
		OPSYS=${OPSYS:tl} \
		GCC_TARGET=${GCC_TARGET} \
		GCC_VERSION=${PORTVERSION}

TARGETARCH=	${PKGNAMEPREFIX:C/-//g}

GCC_TARGET?=	aarch64-none-elf

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
CONFIGURE_OUTSOURCE=	yes
CONFIGURE_ARGS+=--target=${GCC_TARGET} --disable-nls --enable-languages=c,c++ \
		--enable-gnu-indirect-function \
		--without-headers \
		--with-gmp=${LOCALBASE} \
		--with-pkgversion="FreeBSD Ports Collection for ${PKGNAMEPREFIX:C/-//g}" \
		--with-system-zlib \
		--with-gxx-include-dir=/usr/include/c++/v1/ \
		--with-sysroot="/" \
		--with-as=${LOCALBASE}/bin/${GCC_TARGET}-as \
		--with-ld=${LOCALBASE}/bin/${GCC_TARGET}-ld

# U-Boot requires libgcc, crossbuild and install it along with the compiler.
ALL_TARGET=	all-gcc all-target-libgcc
INSTALL_TARGET=	install-gcc install-target-libgcc

.include <bsd.port.pre.mk>

# Extraction fails with poudriere on aarch64 for GCC 11.
# It seems that the bug is specific to lang/gcc11 and lang/gcc12 only.
# No other GCC port is affected.
# See https://bugs.freebsd.org/bugzilla/show_bug.cgi?id=271052
# and https://bugs.freebsd.org/bugzilla/show_bug.cgi?id=246670
.if ${ARCH} == aarch64
EXTRACT_CMD=    ${SETENV} LC_ALL=en_US.UTF-8 /usr/bin/bsdtar
.endif

post-patch:
	@${REINPLACE_CMD} -e '/LIBSTDCXX/ s/stdc\+\+/c\+\+/g ' \
		${WRKSRC}//gcc/cp/g++spec.c
	@${REINPLACE_CMD} -e '/LOCAL_INCLUDE_DIR/ d ' \
		${WRKSRC}//gcc/Makefile.in

.if ${ARCH} == "x86_64"
CONFIGURE_TARGET=	x86_64-unknown-${OPSYS:tl}${OSREL}
.else
CONFIGURE_TARGET=	${ARCH}-unknown-${OPSYS:tl}${OSREL}
.endif

# The following is required for clang to bootstrap gcc.
.if ${COMPILER_TYPE} == clang
MAKE_ARGS+=	CXXFLAGS=-fbracket-depth=512
.endif

post-install:
.for f in cpp gcov gcov-dump gcov-tool
	@if [ -f ${STAGEDIR}${PREFIX}/bin/$f ] ; then \
		${MV} ${STAGEDIR}${PREFIX}/bin/$f  \
		    ${STAGEDIR}${PREFIX}/bin/${GCC_TARGET}-$f ; \
	fi
.endfor
.for f in c++ cpp g++ gcc gcc-ar gcc-nm gcc-ranlib gcov gcov-dump gcov-tool
	@if [ ! -f ${STAGEDIR}${PREFIX}/share/man/man1/${GCC_TARGET}-$f.1 ] ; then \
		if [ -f ${STAGEDIR}${PREFIX}/share/man/man1/$f.1 ] ; then \
			${CP} ${STAGEDIR}${PREFIX}/share/man/man1/$f.1  \
			    ${STAGEDIR}${PREFIX}/share/man/man1/${GCC_TARGET}-$f.1 ; \
		fi \
	fi
	@${RM} ${STAGEDIR}${PREFIX}/bin/$f
	@${RM} ${STAGEDIR}${PREFIX}/share/man/man1/$f.1
	@${RM} ${STAGEDIR}${PREFIX}/share/man/man1/$f.1.gz
.endfor
	@${RM} ${STAGEDIR}${PREFIX}/share/info/*
	@${RM} ${STAGEDIR}${PREFIX}/share/man/man7/*
	${RM} -r ${STAGEDIR}/usr/lib/gcc/${GCC_TARGET}/${PORTVERSION}/include-fixed

.include <bsd.port.post.mk>

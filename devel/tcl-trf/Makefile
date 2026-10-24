PORTNAME=	Trf
PORTVERSION=	2.1.4
PORTREVISION=	6
CATEGORIES=	devel tcl
MASTER_SITES=	SF/tcltrf/tcltrf/${PORTVERSION}
PKGNAMEPREFIX=	tcl-
DISTNAME=	trf${PORTVERSION}

MAINTAINER=	ports@virtual-estates.net
COMMENT=	Data conversion, digests, compression, error-correction for Tcl
WWW=		https://wiki.tcl-lang.org/479

LICENSE=	Tcl_Trf_License
LICENSE_NAME=	Tcl Trf License
LICENSE_FILE=	${WRKSRC}/doc/license.terms
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

TEST_DEPENDS=	${LOCALBASE}/lib/Memchan2.3/libMemchan.so.1:devel/tcl-memchan

USES+= tcl:tea tar:bzip2 compiler ssl
USE_LDCONFIG=	${PREFIX}/lib/Trf
DDIR=		${PREFIX}/lib/tcl${TCL_VER}/Trf
CFLAGS+=	-Wall -Werror

MAKE_ENV+=	INSTALL_DATA="${INSTALL_DATA}"

REINPLACE_ARGS=	-i ""
CONFIGURE_ARGS+=--enable-static-zlib --enable-static-bzlib \
		--enable-static-md5
CONFIGURE_ENV+=	CC=${CC}

CPPFLAGS= -I${OPENSSLINC}
LDFLAGS= -L${OPENSSLLIB}
CPPFLAGS+= -DOPENSSL_API_COMPAT=0x10101000L
do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/Trf
	${INSTALL_DATA} ${WRKSRC}/libTrf${PORTVERSION}.so \
		${WRKSRC}/pkgIndex.tcl ${STAGEDIR}${PREFIX}/lib/Trf/
	${MKDIR} ${STAGEDIR}${PREFIX}/share/man/mann/
	for m in ${WRKSRC}/doc/man/*.n	;	\
	do	\
		${INSTALL_MAN} $$m ${STAGEDIR}${PREFIX}/share/man/mann/ ;\
	done
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/Trf/libTrf${PORTVERSION}.so

do-test:
	cd ${WRKSRC} && ${SETENV} TCLLIBPATH="${WRKSRC}" ${TCLSH} \
		${FILESDIR}/alltests.tcl

PLIST_SUB+=	TCL_DVER=${TCL_VER:C/\.//} VER=${PORTVERSION}

.include <bsd.port.pre.mk>

.if ${COMPILER_TYPE} == "clang"
CFLAGS+=	-Wno-deprecated-non-prototype
.endif

.if ${DFLYVERSION} > 500700
CPPFLAGS+=	-DSHA_Init=SHA1_Init -DSHA_Update=SHA1_Update -DSHA_Final=SHA1_Final
LIB_DEPENDS+=	libmd.so:security/libmd
.endif

.include <bsd.port.post.mk>

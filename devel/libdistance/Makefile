PORTNAME=	libdistance
PORTVERSION=	0.2.2
PORTREVISION=	2
CATEGORIES=	devel
MASTER_SITES=	http://monkey.org/~jose/software/libdistance/

MAINTAINER=	jonathan@FreeBSD.org
COMMENT=	Compute the distance between two pieces of data
WWW=		https://monkey.org/~jose/software/libdistance

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	swig:devel/swig

USES+=		fakeroot pkgconfig tcl
USE_LDCONFIG=	yes

MAKE_ARGS+=	INCLUDEDIR=${PREFIX}/include LIBDIR=${PREFIX}/lib
MAKE_ARGS+=	MANDIR=${PREFIX}/share/man/man SWIG=swig
MAKE_JOBS_UNSAFE=	yes

CFLAGS+=	-fPIC

.include <bsd.port.options.mk>

.if defined(NOPROFILE) || defined(NO_PROFILE) || ${OPSYS} == FreeBSD
PLIST_SUB+=	PROFILE="@comment "
.else
PLIST_SUB+=	PROFILE=""
.endif

post-patch:
	${REINPLACE_CMD} 's|%%TCL_SHLIB_VER%%|${TCL_SHLIB_VER}|' \
	    ${WRKSRC}/swig/tcl/Makefile

pre-build:
	${MKDIR} ${STAGEDIR}${PREFIX}/tests/${PORTNAME}

post-install:
	(cd ${STAGEDIR}${PREFIX}/lib && ${LN} -s libdistance.a libdistance_p.a)
	(cd ${STAGEDIR}${PREFIX}/lib && ${LN} -s libdistance_wrap.a libdistance_wrap_p.a)

.include <bsd.port.mk>

# Created by: siasia
# $FreeBSD: lang/v8/Makefile 328202 2013-09-24 22:07:10Z vanilla $

PORTNAME=	v8
PORTVERSION=	3.18.5
CATEGORIES=	lang
MASTER_SITES=	LOCAL/vanilla

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	Google\'s open source JavaScript engine

LIB_DEPENDS=	execinfo:${PORTSDIR}/devel/libexecinfo

USES=		gmake
USE_XZ=		yes
USE_PYTHON=	2.6+
USE_LDCONFIG=	yes
ALL_TARGET=	native
MAKE_ARGS=	strictaliasing=off
MAKE_ENV+=	GYPFLAGS=-DOS=freebsd
MAKE_ENV+=	library=shared
USE_GCC=	4.7
CFLAGS+=	-D__FreeBSD__=1

.include <bsd.port.pre.mk>


ONLY_FOR_ARCHS=	i386 amd64

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|' \
		${WRKSRC}/build/common.gypi ${WRKSRC}/tools/gyp/v8.gyp

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/out/native/d8 ${STAGEDIR}/${PREFIX}/bin/d8
	${INSTALL_LIB} -m 755 ${WRKSRC}/out/native/lib.target/libv8.so ${STAGEDIR}/${PREFIX}/lib/libv8.so.1
	${LN} -sf ${PREFIX}/lib/libv8.so.1 ${STAGEDIR}/${PREFIX}/lib/libv8.so
	${INSTALL_DATA} ${WRKSRC}/include/v8.h ${STAGEDIR}/${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/include/v8-debug.h ${STAGEDIR}/${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/include/v8-preparser.h ${STAGEDIR}/${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/include/v8-profiler.h ${STAGEDIR}/${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/include/v8-testing.h ${STAGEDIR}/${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/include/v8stdint.h ${STAGEDIR}/${PREFIX}/include

.include <bsd.port.post.mk>

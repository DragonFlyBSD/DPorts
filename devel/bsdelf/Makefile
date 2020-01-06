
PORTNAME=	bsdelf
DISTNAME=	elftoolchain-${PORTVERSION}
PORTVERSION=	0.7.1
CATEGORIES=	devel
MASTER_SITES=	SF/elftoolchain/Sources/elftoolchain-${PORTVERSION}

MAINTAINER=	zrj@efnet.irc
COMMENT=	BSD libelf implementation.

LICENSE=	BSD3CLAUSE

USES=		tar:bz2

CFLAGS+=	-Wno-error=implicit-fallthrough -Wno-error=shift-negative-value
LDFLAGS+=	-Wl,-rpath,${LOCALBASE}/bsdelf/lib

MAKE_ARGS=	WITH_TESTS="no" NOPROFILE=yes NOMAN=yes
MAKE_ARGS+=	INCSDIR=${LOCALBASE}/bsdelf/include LIBDIR=${LOCALBASE}/bsdelf/lib

MAKE_JOBS_UNSAFE= yes

post-patch:
	${REINPLACE_CMD} -e 's@SUBDIR@#&@g' -e '/common/s@^#SUB@SUB@g' \
			 -e '/libelf/s@^#SUB@SUB@g' -e '/libdwarf/s@^#SUB@SUB@g' \
		${WRKSRC}/Makefile

pre-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/bsdelf/include
	${MKDIR} ${STAGEDIR}${PREFIX}/bsdelf/lib

.include <bsd.port.mk>

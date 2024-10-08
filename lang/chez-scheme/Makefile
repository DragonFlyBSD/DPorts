PORTNAME=	chez-scheme
PORTVERSION=	9.6.4
DISTVERSIONPREFIX=	v
CATEGORIES=	lang
MASTER_SITES=	https://github.com/cisco/ChezScheme/releases/download/${DISTVERSIONPREFIX}${DISTVERSION}/ \
		http://distfiles.pirateparty.in/ashish/:boot \
		LOCAL/ashish:boot
DISTNAME=	csv${PORTVERSION}
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} \
		${PORTNAME}-boot-ta6fb-${PORTVERSION}.tar.xz:boot \
		${PORTNAME}-boot-ti3fb-${PORTVERSION}.tar.xz:boot

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	Chez Scheme system
WWW=		https://cisco.github.io/ChezScheme

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=	amd64 i386

LIB_DEPENDS=	libuuid.so:misc/e2fsprogs-libuuid \
		libossp-uuid.so:misc/ossp-uuid

USES=		gmake iconv:lib ncurses

OPTIONS_DEFAULT=	X11
OPTIONS_DEFINE=	X11

HAS_CONFIGURE=	yes
ALL_TARGET=	build
CONFLICTS_INSTALL=	petite-chez
STRIP_FILES=	bin/petite bin/${PORTNAME} bin/${PORTNAME}-script
CHEZ_LIBDIR=	lib/${DISTNAME:S/.0$//}
CFLAGS+=	-fPIC
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -luuid
CONFIGURE_ARGS=	--installprefix=${PREFIX} \
		--temproot=${STAGEDIR} \
		--installschemename=${PORTNAME} \
		--installscriptname=${PORTNAME}-script
PLIST_SUB=	PORTNAME=${PORTNAME} \
		CHEZ_ARCH=${CHEZ_ARCH} \
		CHEZ_LIBDIR=${CHEZ_LIBDIR}
X11_USES=	xorg
X11_USE=	XORG=x11

.include <bsd.port.pre.mk>

.if (${ARCH} == "x86_64")
CONFIGURE_ARGS+=	--threads --64 -m=ta6fb
CHEZ_ARCH=	ta6fb
.elif (${ARCH} == "i386")
CONFIGURE_ARGS+=	--threads --32 -m=ti3fb
CHEZ_ARCH=	ti3fb
.endif

.if defined(NCURSES_RPATH)
NCURSES_REPL=	-e 's|-Wl,-rpath,${NCURSESRPATH}||g'
.else
NCURSES_REPL=
.endif

post-patch:
	${LN} -sf ${WRKDIR}/${CHEZ_ARCH} ${WRKSRC}/boot/

post-configure:
	${REINPLACE_CMD} -e 's,/usr/X11R6,${LOCALBASE},g' \
		-e 's,/usr/local,${LOCALBASE},g' ${NCURSES_REPL} \
		-e 's,-liconv,${ICONV_LIB},g' ${WRKSRC}/${CHEZ_ARCH}/c/Mf-config ${WRKSRC}/c/Mf-${CHEZ_ARCH}

pre-build-X11-off:
	${ECHO_CMD} '#undef LIBX11' >>${WRKSRC}/c/version.h

post-install:
.for f in ${STRIP_FILES}
	@${CHMOD} +w ${STAGEDIR}${PREFIX}/${f}
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/${f}
	@${CHMOD} -w ${STAGEDIR}${PREFIX}/${f}
.endfor
.if ("lib/${DISTNAME}" != "${CHEZ_LIBDIR}")
	@${MV} ${STAGEDIR}${PREFIX}/lib/${DISTNAME} ${STAGEDIR}${PREFIX}/${CHEZ_LIBDIR}
.endif
	@${LN} -sf scheme.boot ${STAGEDIR}${PREFIX}/${CHEZ_LIBDIR}/${CHEZ_ARCH}/${PORTNAME}-script.boot

.include <bsd.port.post.mk>

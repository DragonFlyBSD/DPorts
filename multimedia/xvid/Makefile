PORTNAME=	xvid
PORTVERSION=	1.3.7
PORTEPOCH=	1
CATEGORIES=	multimedia
MASTER_SITES=	https://downloads.xvid.com/downloads/
DISTNAME=	${PORTNAME}core-${PORTVERSION}

MAINTAINER=	riggs@FreeBSD.org
COMMENT=	Opensource MPEG-4 codec, based on OpenDivx
WWW=		http://www.xvid.org/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKDIR}/xvidcore/LICENSE

USES=		cpe gmake tar:bz2
GNU_CONFIGURE=	yes
MAKE_JOBS_UNSAFE=	yes
USE_LDCONFIG=	yes

# PR230208 Allow relocations against read-only segments (override lld default)
LDFLAGS_i386=	-Wl,-z,notext

CFLAGS_powerpc=	-Dregister=
CONFIGURE_ENV+=	ac_cv_prog_ac_yasm=no

PLIST_FILES=	include/xvid.h \
		lib/libxvidcore.a \
		lib/libxvidcore.so \
		lib/libxvidcore.so.4 \
		lib/libxvidcore.so.4.3

WRKSRC=		${WRKDIR}/xvidcore/build/generic

OPTIONS_DEFINE=	OPTIMIZED_CFLAGS

.include <bsd.port.pre.mk>

.if ${ARCH} == "x86_64"
CONFIGURE_TARGET=	x86_64-portbld-freebsd${OSREL}
.endif

.if ${ARCH}=="i386"
# relocation against symbol in readonly segment
LLD_UNSAFE=	yes
.endif

.if ${ARCH} == "x86_64" || ${ARCH} == "i386"
BUILD_DEPENDS+=	nasm:devel/nasm
.endif

.if ${PORT_OPTIONS:MOPTIMIZED_CFLAGS}
# let xvid's build system override CFLAGS
EXTRA_PATCHES+=	${FILESDIR}/extra-patch-cflags
.endif

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libxvidcore.so

.include <bsd.port.post.mk>

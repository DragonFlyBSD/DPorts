PORTNAME=	tenebrae
PORTVERSION=	1.04
PORTREVISION=	13
CATEGORIES=	games
MASTER_SITES=	http://tenebrae.sourceforge.net/downloads/
DISTFILES=	${PORTNAME}_src${EXTRACT_SUFX} \
		${PORTNAME}data${EXTRACT_SUFX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Quake engine with lighting similar to that in Doom III
WWW=		https://tenebrae.sourceforge.net/

LICENSE=	GPLv2+

LIB_DEPENDS=	libpng.so:graphics/png

USES=		gl gmake dos2unix sdl xorg zip
USE_GL=		gl glu
USE_SDL=	sdl
USE_XORG=	x11 xext xxf86vm xxf86dga

MAKEFILE=	Makefile.i386linux
MAKE_ENV=	PTHREAD_LIBS="-lpthread"

BUILD_WRKSRC=	${WRKSRC}/linux
WRKSRC=		${WRKDIR}/${PORTNAME}_0

OPTIONS_DEFINE=	DOCS
OPTIONS_DEFINE_x86_64=	ASM
OPTIONS_DEFAULT_x86_64=	ASM

ASM_MAKE_ENV=	USE_ASM=1

post-patch:
	@${REINPLACE_CMD} -e 's|gray_1_2_4_to_8|expand_&|' \
		${WRKSRC}/gl_warp.c

pre-build:
	@cd ${BUILD_WRKSRC} && ${LN} -sf Makefile.i386linux Makefile

do-install:
	${INSTALL_PROGRAM} ${BUILD_WRKSRC}/release/bin/${PORTNAME} \
		${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${Q1DIR}/${PORTNAME}
	${INSTALL_DATA} ${WRKDIR}/${PORTNAME}/Pak0.pak ${STAGEDIR}${Q1DIR}/${PORTNAME}

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${TR} -d '\r' < ${WRKDIR}/Tenebrae_Readme.txt \
		> ${STAGEDIR}${DOCSDIR}/Tenebrae_Readme.txt

.include "${.CURDIR}/../quake-data/Makefile.include"
.include <bsd.port.mk>

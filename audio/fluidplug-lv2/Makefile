PORTNAME=	FluidPlug
PORTVERSION=	g20230318
CATEGORIES=	audio
PKGNAMESUFFIX=	-lv2
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	SoundFonts as LV2 plugins via FluidSynth
WWW=		https://github.com/falkTX/FluidPlug

LICENSE=	LGPL20

BUILD_DEPENDS=	7zz:archivers/7-zip \
		lv2>0:audio/lv2
LIB_DEPENDS=	libfluidsynth.so:audio/fluidsynth

USES=		gmake pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	falkTX
GH_TAGNAME=	38d7d0d

SOUNDFONT_DIR=	${PREFIX}/share/sounds/sf2

OPTIONS_DEFINE_x86_64=	SSE
OPTIONS_DEFINE_i386=	SSE

SSE_MAKE_ARGS=	PORT_SIMD_FLAGS="-mtune=generic -msse -msse2 -mfpmath=sse"

.include <bsd.port.options.mk>

.if ${OPSYS} == FreeBSD && ( ${OSVERSION} >= 1400091 || ( ${OSVERSION} >= 1302507 && ${OSVERSION} < 1400000 ))
CFLAGS+=	-Wno-error=incompatible-function-pointer-types
.endif

post-patch:
	@${REINPLACE_CMD} -e ' \
		s|PREFIX  = /usr|PREFIX ?= /usr| ; \
		s|wget .*\/\(.*\) \&\& \\|${LN} -s ${DISTDIR}/\1 . \&\& \\| ; \
		s|7z x |7zz x -bd |' \
		${WRKSRC}/Makefile

post-install:
	# link installed soundfonts to the standard location for convenience of other apps
	@${MKDIR} ${STAGEDIR}${SOUNDFONT_DIR}
	@for f in ${STAGEDIR}${PREFIX}/lib/lv2/*.lv2/FluidPlug.sf2; do \
		${RLN} $$f ${STAGEDIR}${SOUNDFONT_DIR}/$$(${ECHO} $$f | ${SED} -E 's|.*/lib/lv2/([[:alnum:]_]+)\.lv2/FluidPlug\.sf2|\1.sf2|');  \
	done

.include "Makefile.list"
.include <bsd.port.mk>

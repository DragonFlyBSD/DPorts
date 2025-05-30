PORTNAME=	faust
DISTVERSION=	1.4.20220802
CATEGORIES=	audio
MASTER_SITES=	https://bitbucket.org/${BB_ACCOUNT}/${BB_PROJECT}/get/${BB_COMMIT}.tar.gz?dummy=/
PKGNAMESUFFIX=	-lv2

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	LV2 plugin architecture for the Faust programming language
WWW=		https://bitbucket.org/agraef/faust-lv2

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BROKEN_aarch64=		fails to link: can't create dynamic relocation R_AARCH64_ADR_PREL_PG_HI21 against symbol: vtable for LV2UI in readonly segment
.if ${/usr/bin/ld:L:tA} == /usr/bin/ld.lld
BROKEN_i386=		ld: error: can't create dynamic relocation R_386_32 against symbol: vtable for LV2UI in readonly segment
.endif
BROKEN_riscv64=		can't create dynamic relocation R_RISCV_LO12_I against symbol: vtable for LV2UI in readonly segment; recompile object files with -fPIC or pass '-Wl,-z,notext' to allow text relocations in the output

BUILD_DEPENDS=	lv2>0:audio/lv2 \
		faust>0:audio/faust \
		${LOCALBASE}/include/boost/circular_buffer.hpp:devel/boost-libs

USES=		gmake localbase tar:bz2

BB_ACCOUNT=	agraef
BB_PROJECT=	faust-lv2
BB_COMMIT=	27ed7cb9cb49

WRKSRC=		${WRKDIR}/${BB_ACCOUNT}-${BB_PROJECT}-${BB_COMMIT}

CFLAGS+=	-fPIC

OPTIONS_DEFINE_x86_64=	SIMD
OPTIONS_DEFINE_i386=	SIMD
OPTIONS_DEFAULT_x86_64=	SIMD
OPTIONS_DEFAULT_i386=	SIMD

SIMD_CFLAGS=	-msse -msse2 -mfpmath=sse

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/lv2/faust.lv2/*.so

.include <bsd.port.mk>

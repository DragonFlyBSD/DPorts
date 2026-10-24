PORTNAME=	sentencepiece
DISTVERSIONPREFIX=	v
DISTVERSION=	0.2.2
CATEGORIES=	textproc # machine-learning

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Unsupervised text tokenizer for Neural Network-based text generation
WWW=		https://github.com/google/sentencepiece

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libabsl_strings.so:devel/abseil \
		libprotobuf-lite.so:devel/protobuf

USES=		cmake:testing compiler:c++17-lang
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	google

CMAKE_ARGS=	-DSPM_ABSL_PROVIDER=package \
		-DSPM_PROTOBUF_PROVIDER=package
CMAKE_TESTING_ON=	SPM_BUILD_TEST

# abseil 20250127+ removed absl/status/status_macros.h and
# absl/status/status_builder.h; provide local compatibility headers and
# redirect the sentencepiece includes to them.
CXXFLAGS+=	-I${WRKSRC}

post-patch:
	@${REINPLACE_CMD} -e 's|"third_party/absl/status/status_macros.h"|"compat/absl/status/status_macros.h"|' ${WRKSRC}/src/common.h
	@${REINPLACE_CMD} -e 's|"third_party/absl/status/status_builder.h"|"compat/absl/status/status_builder.h"|' ${WRKSRC}/src/util.h ${WRKSRC}/src/spec_parser.h
	@${REINPLACE_CMD} -e 's|return absl::endian::native == absl::endian::big;|return __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__;|' ${WRKSRC}/src/util.h
	@${REINPLACE_CMD} -e 's|absl::MutexLock lock(status_mutex);|absl::MutexLock lock(\&status_mutex);|' ${WRKSRC}/src/sentencepiece_processor.cc
	@${REINPLACE_CMD} -e 's|absl::MutexLock l(mu_);|absl::MutexLock l(\&mu_);|g' ${WRKSRC}/src/util.cc
	@${MKDIR} ${WRKSRC}/compat/absl/status
	${INSTALL_DATA} ${FILESDIR}/status_macros.h ${WRKSRC}/compat/absl/status/status_macros.h
	${INSTALL_DATA} ${FILESDIR}/status_builder.h ${WRKSRC}/compat/absl/status/status_builder.h

OPTIONS_DEFINE=		GPERFTOOLS # this seems to cause this error in llama-cpp's convert_hf_to_gguf.py: Attempt to free invalid pointer 0x1ef160aa2f80, see https://github.com/google/sentencepiece/issues/1105

GPERFTOOLS_CMAKE_BOOL=	SPM_ENABLE_TCMALLOC
GPERFTOOLS_LIB_DEPENDS=	libtcmalloc.so:devel/google-perftools

# tests as of 0.2.2: 100% tests passed, 0 tests failed out of 1

.include <bsd.port.mk>

PORTNAME=	openssl
PORTVERSION=	1.0.2u
CATEGORIES=	security devel
MASTER_SITES=	http://www.openssl.org/source/ \
		ftp://ftp.cert.dfn.de/pub/tools/net/openssl/source/
DIST_SUBDIR=	${PORTNAME}-${DISTVERSION:C/[a-z]$//}
PKGNAMESUFFIX?=	-legacy-static

MAINTAINER=	zrj@ef.irc
COMMENT=	OpenSSL and crypto library (legacy 1.0.x static version)

LICENSE=	OpenSSL
LICENSE_FILE=	${WRKSRC}/LICENSE

OPTIONS_DEFINE=		RFC3779 THREADS ZLIB
OPTIONS_DEFAULT=	ASM MD2 SSE2 SSL2 SSL3 THREADS
OPTIONS_DEFINE_x86_64=	EC
OPTIONS_DEFAULT_x86_64=	EC
OPTIONS_GROUP=	CIPHERS HASHES OPTIMIZE PROTOCOLS
OPTIONS_GROUP_CIPHERS=	RC5
OPTIONS_GROUP_HASHES=	MD2
OPTIONS_GROUP_OPTIMIZE=	ASM SSE2
OPTIONS_GROUP_PROTOCOLS=	SSL2 SSL3
OPTIONS_SUB=	yes
ASM_DESC=	Optimized Assembler code
CIPHERS_DESC=	Cipher Suite support
EC_DESC=	Optimize NIST elliptic curves
HASHES_DESC=	Hash Function Support
MD2_DESC=	MD2 hash (obsolete)
OPTIMIZE_DESC=	Optimizations
PROTOCOLS_DESC=	Protocol Support
RC5_DESC=	RC5 cipher (patented)
RFC3779_DESC=	RFC3779 support (BGP)
SSE2_DESC=	Runtime SSE2 detection
SSL2_DESC=	SSLv2 protocol support
SSL3_DESC=	SSLv3 protocol support
ZLIB_DESC=	zlib compression support

USES=		compiler cpe perl5
USE_PERL5=	build
MAKE_ARGS+=	WHOLE_ARCHIVE_FLAG=--whole-archive
MAKE_ENV+=	GREP_OPTIONS=
SUB_FILES=	pkg-message
TEST_TARGET=	test

MAKE_JOBS_UNSAFE=	yes

ASM_CONFIGURE_OFF=	no-asm
EC_CONFIGURE_ON=	enable-ec_nistp_64_gcc_128
EC_CONFIGURE_OFF=	no-ec_nistp_64_gcc_128
MD2_CONFIGURE_ON=	enable-md2
MD2_CONFIGURE_OFF=	no-md2
RC5_CONFIGURE_ON=	enable-rc5
RC5_CONFIGURE_OFF=	no-rc5
RFC3779_CONFIGURE_ON=	enable-rfc3779
RFC3779_CONFIGURE_OFF=	no-rfc3779
SSE2_CONFIGURE_OFF=	no-sse2
SSL2_CONFIGURE_ON=	enable-ssl2
SSL2_CONFIGURE_OFF=	no-ssl2
SSL3_CONFIGURE_ON=	enable-ssl3
SSL3_CONFIGURE_OFF=	no-ssl3 no-ssl3-method
SSL3_EXTRA_PATCHES_OFF=	${PATCHDIR}/extra-patch-test_testssl
THREADS_CONFIGURE_ON=	threads
THREADS_CONFIGURE_OFF=	no-threads
ZLIB_CONFIGURE_ON=	zlib
ZLIB_CONFIGURE_OFF=	no-zlib

CONFIGURE_ARGS=		no-dso no-gmp no-padlock no-sctp no-zlib-dynamic

OPENSSLDIR?=	${PREFIX}/openssl-legacy-static
PLIST_SUB+=	OPENSSLDIR=${OPENSSLDIR:S=^${PREFIX}/==}

CFLAGS+=	-fpic -DPIC

post-patch:
	${REINPLACE_CMD} -e 's|m4 -B 8192|m4|g' \
		${WRKSRC}/crypto/des/Makefile
	${REINPLACE_CMD} -e 's|\^GNU ld|GNU|' ${WRKSRC}/Makefile.shared
	${GREP} -L openssl_manual_section ${WRKSRC}/doc/crypto/*.pod | ${XARGS} ${RM}
	${REINPLACE_CMD} -e 's|pod doc/ssl/\*\.pod|pod|' ${WRKSRC}/Makefile.org

do-configure:
	${REINPLACE_CMD} -e "s|options 386|options|" ${WRKSRC}/config
	cd ${WRKSRC} \
	&& ${SETENV} CC="${CC}" FREEBSDCC="${CC}" CFLAGS="${CFLAGS}" PERL="${PERL}" \
	./config --prefix=${OPENSSLDIR} --openssldir=${OPENSSLDIR} \
		--install_prefix=${STAGEDIR} \
		-L${PREFIX}/lib ${CONFIGURE_ARGS}

post-configure:
	${REINPLACE_CMD} \
		-e 's|^MANDIR=.*$$|MANDIR=$$(PREFIX)/man|' \
		-e 's|$$(LIBDIR)/pkgconfig|libdata/pkgconfig|g' \
		-e 's|LIBVERSION=[^ ]* |LIBVERSION=${OPENSSL_SHLIBVER} |' \
		${WRKSRC}/Makefile

post-install:
	${RM} -r ${STAGEDIR}/${PREFIX}/man
	${RM} -r ${STAGEDIR}/${PREFIX}/openssl-legacy-static/lib/engines

.include <bsd.port.mk>

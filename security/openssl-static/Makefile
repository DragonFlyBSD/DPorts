PORTNAME=	openssl
PORTVERSION=	1.1.1d
CATEGORIES=	security devel
MASTER_SITES=	https://www.openssl.org/source/ \
		ftp://ftp.cert.dfn.de/pub/tools/net/openssl/source/
PKGNAMESUFFIX?=	-static

MAINTAINER=	zrj@ef.irc
COMMENT=	OpenSSL and crypto library (static version)

LICENSE=	OpenSSL
LICENSE_FILE=	${WRKSRC}/LICENSE

HAS_CONFIGURE=	yes
CONFIGURE_SCRIPT=	config
CONFIGURE_ENV=	PERL="${PERL}"
CONFIGURE_ARGS=	--openssldir=${OPENSSLDIR} \
		--prefix=${PREFIX}/openssl-static

USES=		cpe perl5
USE_PERL5=	build
TEST_TARGET=	test

MAKE_ARGS+=	WHOLE_ARCHIVE_FLAG=--whole-archive CNF_LDFLAGS="${LDFLAGS}"
MAKE_ENV+=	GREP_OPTIONS=

OPTIONS_GROUP=		CIPHERS HASHES OPTIMIZE PROTOCOLS
OPTIONS_GROUP_CIPHERS=	ARIA DES GOST IDEA SM2 SM3 SM4 RC2 RC4 RC5
OPTIONS_GROUP_HASHES=	MD2 MD4 MDC2 RMD160
OPTIONS_GROUP_OPTIMIZE=	ASM SSE2 THREADS
OPTIONS_GROUP_PROTOCOLS=NEXTPROTONEG SSL3 TLS1 TLS1_1 TLS1_2

OPTIONS_DEFINE=	ASYNC CT RFC3779 ZLIB

OPTIONS_DEFAULT=ASM CT GOST DES EC MAN3 NEXTPROTONEG \
		RMD160 SSE2 THREADS TLS1 TLS1_1 TLS1_2

OPTIONS_GROUP_OPTIMIZE_x86_64=	EC

.if ${MACHINE_ARCH} == "x86_64"
OPTIONS_GROUP_OPTIMIZE+=	EC
.endif

OPTIONS_SUB=	yes

ARIA_DESC=	ARIA (South Korean standard)
ASM_DESC=	Assembler code
ASYNC_DESC=	Asynchronous mode
CIPHERS_DESC=	Block Cipher Support
CT_DESC=	Certificate Transparency Support
DES_DESC=	(Triple) Data Encryption Standard
EC_DESC=	Optimize NIST elliptic curves
GOST_DESC=	GOST (Russian standard)
HASHES_DESC=	Hash Function Support
IDEA_DESC=	International Data Encryption Algorithm
MD2_DESC=	MD2 (obsolete)
MD4_DESC=	MD4 (unsafe)
MDC2_DESC=	MDC-2 (patented, requires DES)
NEXTPROTONEG_DESC=	Next Protocol Negotiation (SPDY)
OPTIMIZE_DESC=	Optimizations
PROTOCOLS_DESC=	Protocol Support
RC2_DESC=	RC2 (unsafe)
RC4_DESC=	RC4 (unsafe)
RC5_DESC=	RC5 (patented)
RMD160_DESC=	RIPEMD-160
RFC3779_DESC=	RFC3779 support (BGP)
SM2_DESC=	SM2 (Chinese standard)
SM3_DESC=	SM3 (Chinese standard)
SM4_DESC=	SM4 (Chinese standard)
SSE2_DESC=	Runtime SSE2 detection
SSL3_DESC=	SSLv3 (unsafe)
TLS1_DESC=	TLSv1.0 (requires TLS1_1, TLS1_2)
TLS1_1_DESC=	TLSv1.1 (requires TLS1_2)
TLS1_2_DESC=	TLSv1.2
ZLIB_DESC=	zlib compression support

CONFIGURE_ARGS+=	no-dso no-sctp no-shared no-zlib-dynamic

# Upstream default disabled options
.for _option in md2 rc5 ssl3 zlib
${_option:tu}_CONFIGURE_ON=	enable-${_option}
.endfor

# Upstream default enabled options
.for _option in aria asm async ct des gost idea md4 mdc2 nextprotoneg rc2 rc4 \
	rfc3779 rmd160 sm2 sm3 sm4 sse2 threads tls1 tls1_1 tls1_2
${_option:tu}_CONFIGURE_OFF=	no-${_option}
.endfor

MDC2_IMPLIES=	DES
TLS1_IMPLIES=	TLS1_1
TLS1_1_IMPLIES=	TLS1_2

EC_CONFIGURE_ON=	enable-ec_nistp_64_gcc_128
EXTRA_PATCHES+=		${FILESDIR}/extra-patch-util_process__docs.pl
SSL3_CONFIGURE_ON+=	enable-ssl3-method
ZLIB_CONFIGURE_ON=	zlib

OPENSSLDIR?=	${PREFIX}/openssl-static
PLIST_SUB+=	OPENSSLDIR=${OPENSSLDIR:S=^${PREFIX}/==}

CFLAGS+=	-fpic -DPIC

post-patch:
	${REINPLACE_CMD} \
		-e 's|^MANDIR=.*$$|MANDIR=$$(INSTALLTOP)/man|' \
		-e 's| install_html_docs$$||' \
		-e 's|$$(LIBDIR)/pkgconfig|libdata/pkgconfig|g' \
		${WRKSRC}/Configurations/unix-Makefile.tmpl
	${REINPLACE_CMD} -e 's|\^GNU ld|GNU|' ${WRKSRC}/Configurations/shared-info.pl

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/openssl-static/bin/openssl
	${MKDIR} ${STAGEDIR}/${PREFIX}/openssl-static/libdata
	${MV} ${STAGEDIR}/${PREFIX}/openssl-static/lib/pkgconfig \
		${STAGEDIR}/${PREFIX}/openssl-static/libdata/
	${RM} -r ${STAGEDIR}/${PREFIX}/openssl-static/man
	${RM} -r ${STAGEDIR}/${PREFIX}/openssl-static/lib/engines*

.include <bsd.port.mk>

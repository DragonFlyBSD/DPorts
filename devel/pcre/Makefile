PORTNAME=	pcre
PORTVERSION=	8.45
PORTREVISION=	4
CATEGORIES=	devel
MASTER_SITES=	https://ftp.pcre.org/pub/pcre/ \
		SF

MAINTAINER=	krion@FreeBSD.org
COMMENT=	Perl Compatible Regular Expressions library
WWW=		https://www.pcre.org/

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENCE

DEPRECATED=	EOLed by upstream, use devel/pcre2 instead

USES=			${USES_${ARCH}} cpe libtool pathfix tar:bzip2
USES_powerpc=		compiler:c++11-lang
USES_powerpc64=		compiler:c++11-lang
USES_powerpcspe=	compiler:c++11-lang
USE_LDCONFIG=		yes

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
CONFIGURE_ARGS=	--enable-pcre16 \
		--enable-pcre32 \
		--enable-pcre8 \
		--enable-unicode-properties \
		--enable-utf

INSTALL_TARGET=	install-strip
TEST_TARGET=	check

PORTDOCS=	*

OPTIONS_DEFINE=		DOCS JIT MAN3 STACK_RECURSION
OPTIONS_DEFAULT=	MAN3 STACK_RECURSION
OPTIONS_DEFAULT_aarch64+=	JIT
OPTIONS_DEFAULT_x86_64+=	JIT
OPTIONS_DEFAULT_i386+=	JIT
OPTIONS_DEFAULT_mips+=	JIT
OPTIONS_DEFAULT_powerpc=JIT
OPTIONS_DEFAULT_powerpc64=	JIT
OPTIONS_DEFAULT_powerpc64le=	JIT

OPTIONS_RADIO=		CLI
OPTIONS_RADIO_CLI=	LIBEDIT READLINE
OPTIONS_SUB=		yes

JIT_DESC=		Use the JIT compiler (not available on all platforms)
MAN3_DESC=		Install API manpages (section 3)
STACK_RECURSION_DESC=	Use the stack for recursion during matching

JIT_CONFIGURE_ENABLE=	jit

LIBEDIT_USES=			libedit
LIBEDIT_CONFIGURE_ENABLE=	pcretest-libedit

READLINE_USES=			readline
READLINE_CONFIGURE_ENABLE=	pcretest-libreadline

STACK_RECURSION_CONFIGURE_ENABLE=	stack-for-recursion

.include <bsd.port.pre.mk>

# Optional knobs that accept positive integer parameters (see pcrebuild(3)):

# Allow the use of very large patterns (> 64K) with the 8- and 16-bit
# libraries, at the expense of longer load times (possible values:
# 2 (default), 3, and 4):
.if defined(WITH_LINK_SIZE)
CONFIGURE_ARGS+=	--with-link-size=${WITH_LINK_SIZE}
.endif

# Control PCRE resource use by limiting the default number of times pcre_exec()
# can call match() during a single operation (default: 10 million):
.if defined(WITH_MATCH_LIMIT)
CONFIGURE_ARGS+=	--with-match-limit=${WITH_MATCH_LIMIT}
.endif

# Control PCRE resource use by limiting the default number of times pcre_exec()
# can call match() recursively during a single operation (default: 10 million):
.if defined(WITH_MATCH_LIMIT_RECURSION)
CONFIGURE_ARGS+=	--with-match-limit-recursion=${WITH_MATCH_LIMIT_RECURSION}
.endif

# Control PCRE resource use by limiting the nesting depth of parentheses in
# patterns compiled with pcre_compile() (default: 250):
.if defined(WITH_PARENS_NEST_LIMIT)
CONFIGURE_ARGS+=	--with-parens-nest-limit=${WITH_PARENS_NEST_LIMIT}
.endif

# Adjust the default maximum number of substrings that will be stored on the stack
# when the 8-bit library is called via the POSIX interface (default: 10):
.if defined(WITH_POSIX_MALLOC_THRESHOLD)
CONFIGURE_ARGS+=	--with-posix-malloc-threshold=${WITH_POSIX_MALLOC_THRESHOLD}
.endif

post-patch:
	@${REINPLACE_CMD} -e "/^\.rs/d" ${WRKSRC}/doc/*.3 ${WRKSRC}/doc/*.1
	@${REINPLACE_CMD} -e "s/£//g" ${WRKSRC}/doc/pcre_compile2.3

.include <bsd.port.post.mk>

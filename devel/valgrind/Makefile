# Created by: Simon Barner <barner@gmx.de>

PORTNAME=	valgrind
PORTVERSION=	3.15.0
CATEGORIES=	devel
MASTER_SITES=	https://valgrind.org/

MAINTAINER=	pjfloyd@wanadoo.fr
COMMENT=	Memory debugging and profiling tool

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

ONLY_FOR_ARCHS=	amd64 i386

USES=		cpe pathfix pkgconfig gmake perl5 shebangfix autoreconf
USE_PERL5=	build

GNU_CONFIGURE=	yes
SHEBANG_FILES=	callgrind/callgrind_annotate.in callgrind/callgrind_control.in
SSP_UNSAFE=	yes
LIB32_PATH?=	/usr/lib32/libc.so

CONFLICTS=	valgrind-[0-9]*

USE_GITHUB=	yes
GH_ACCOUNT=	dan1338
GH_PROJECT=	valgrind-dragonfly
GH_TAGNAME=	dragonfly

CONFIGURE_ENV+=	ac_cv_path_PERL=${PERL}

PORTDOCS=	html

OPTIONS_DEFINE=		DOCS MANPAGES MPI
OPTIONS_DEFINE_x86_64=	32BIT
OPTIONS_DEFAULT=	MANPAGES
.if exists(${LIB32_PATH})
OPTIONS_DEFAULT_x86_64=	32BIT
.endif
OPTIONS_SUB=	yes

32BIT_DESC=	Enable debugging of 32-bit programs (requires lib32)
MPI_DESC=	Enable build of MPI wrappers

DOCS_BUILD_DEPENDS=	docbook-xsl>=0:textproc/docbook-xsl \
			xsltproc:textproc/libxslt
MANPAGES_BUILD_DEPENDS=	docbook-xsl>=0:textproc/docbook-xsl \
			xsltproc:textproc/libxslt
MPI_LIB_DEPENDS=	libmpich.so:net/mpich

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
CONFIGURE_ARGS+=	--docdir=${DOCSDIR}
.endif

.if ${ARCH} == "x86_64"
PLIST_SUB+=	AMD64=""
. if !${PORT_OPTIONS:M32BIT}
CONFIGURE_ARGS+=	--enable-only64bit
PLIST_SUB+=	X86="@comment "
. else
.  if !exists(${LIB32_PATH})
IGNORE=The lib32 distribution was not found. Please install the lib32\
distribution or run 'make config' and uncheck 32BIT option
.  endif
PLIST_SUB+=	X86=""
. endif
.else
PLIST_SUB+=	AMD64="@comment "
PLIST_SUB+=	X86=""
.endif

post-patch:
.if !${PORT_OPTIONS:MDOCS}
	@${RM} -r ${WRKSRC}/docs/html
.endif
.if ${PORT_OPTIONS:MMANPAGES}
	${REINPLACE_CMD} -e \
		's|@XML_MAN_STYLES_CUSTOM@|share/xsl/docbook/manpages/docbook.xsl|g' \
		${WRKSRC}/docs/Makefile.am
.endif

post-build:
.if ${PORT_OPTIONS:MMANPAGES}
	cd ${WRKSRC}/docs && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} man-pages
.endif
.if ${PORT_OPTIONS:MDOCS}
	cd ${WRKSRC}/docs && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} html-docs
.endif

.include <bsd.port.mk>

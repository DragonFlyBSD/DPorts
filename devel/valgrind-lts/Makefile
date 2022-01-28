
PORTNAME=	valgrind
PORTVERSION=	3.15.0
CATEGORIES=	devel
MASTER_SITES=	https://valgrind.org/
PKGNAMESUFFIX=	-lts

MAINTAINER=	zrj@efnet.irc
COMMENT=	Memory debugging and profiling tool

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

ONLY_FOR_ARCHS=	amd64 i386

USES=		cpe pathfix pkgconfig gmake perl5 shebangfix autoreconf
USE_PERL5=	build

GNU_CONFIGURE=	yes
SHEBANG_FILES=	callgrind/callgrind_annotate.in callgrind/callgrind_control.in
SSP_UNSAFE=	yes

CONFLICTS=	valgrind-[0-9]* valgrind

USE_GITHUB=	yes
GH_ACCOUNT=	1338-1
GH_PROJECT=	valgrind-dragonfly
GH_TAGNAME=	dragonfly

CONFIGURE_ENV+=	ac_cv_path_PERL=${PERL}

PORTDOCS=	html

OPTIONS_DEFINE=		DOCS MANPAGES MPI
OPTIONS_DEFAULT=	MANPAGES
OPTIONS_SUB=	yes

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

PLIST_SUB+=	AMD64=""
CONFIGURE_ARGS+=	--enable-only64bit
PLIST_SUB+=	X86="@comment "

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

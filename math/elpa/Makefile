PORTNAME=	elpa
DISTVERSION=	2019.05.002
PORTREVISION=	2
CATEGORIES=	math
MASTER_SITES=	http://elpa.mpcdf.mpg.de/html/Releases/${DISTVERSION}/

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Eigenvalue soLver for Petaflop Applications

LICENSE=	GPLv3 LGPL3
LICENSE_COMB=	dual
LICENSE_FILE_GPLv3=	${WRKSRC}/COPYING/gpl.txt
LICENSE_FILE_LGPL3=	${WRKSRC}/COPYING/lgpl.txt

BROKEN_aarch64=	fails to build: Fatal Error: config-f90.h: No such file or directory

LIB_DEPENDS=	libopenblas.so:math/openblas

USES=		compiler:c11 fortran gmake libtool localbase perl5 shebangfix
USE_LDCONFIG=	yes

SHEBANG_GLOB=	*.pl

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-avx --disable-avx2 --disable-static \
		--disable-c-tests

INSTALL_TARGET=	install-strip

BINARY_ALIAS=	make=gmake gcc=gcc${GCC_DEFAULT} g++=g++${GCC_DEFAULT} # build fails with clang: recursively calls cc
FCFLAGS+=	-std=legacy -I${LOCALBASE}/include

OPTIONS_DEFINE=			OPENMP MPI DOCS
OPTIONS_DEFINE_x86_64=		SSE
OPTIONS_DEFAULT_x86_64=		SSE

SSE_CFLAGS=			-msse3
OPENMP_CONFIGURE_ENABLE=	openmp
MPI_CONFIGURE_WITH=		mpi
MPI_LIB_DEPENDS=		libmpich.so:net/mpich \
				libscalapack.so:math/scalapack

PORTDOCS=	*

post-patch: # workaround for: https://github.com/marekandreas/elpa/issues/6
	@${FIND} ${WRKSRC} -name "*.mk" | ${XARGS} ${REINPLACE_CMD} -e 's|-Werror| |'

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:NSSE}
CONFIGURE_ARGS+=	--disable-sse --disable-sse-assembly
.endif

post-install-DOCS-on:
	@cd ${STAGEDIR}${DOCSDIR} && ${RM} *gpl* COPYING LICENSE

.include <bsd.port.mk>

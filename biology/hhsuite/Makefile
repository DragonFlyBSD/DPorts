PORTNAME=	hhsuite
DISTVERSIONPREFIX=	v
DISTVERSION=	3.3.0
PORTREVISION=	3
CATEGORIES=	biology science

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Remote protein homology detection suite
WWW=		https://github.com/soedinglab/hh-suite

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

NOT_FOR_ARCHS=	armv6 armv7 i386 powerpc powerpcspe # not for 32-bit architectures, see https://github.com/soedinglab/hh-suite/issues/322#issuecomment-1264416293

LIB_DEPENDS=	libmpi.so:net/openmpi

USES=		compiler:c++11-lang cmake perl5 python shebangfix
SHEBANG_GLOB=	*.pl *.py
USE_GITHUB=	yes
GH_ACCOUNT=	soedinglab
GH_PROJECT=	hh-suite

LDFLAGS+=	-Wl,-rpath,${LOCALBASE}/mpi/openmpi/lib -L${LOCALBASE}/mpi/openmpi/lib -lmpi # force linking to openmpi, and not to mpich

.if !exists(/usr/include/omp.h)
PLIST_SUB+=	OPENMP="@comment "
.else
PLIST_SUB+=	OPENMP=""
.endif

CMAKE_ARGS= -DMPI:BOOL:CACHED=true -DHAVE_MPI:BOOL:CACHED=true -DMPI_FOUND:BOOL:CACHED=true -DMPI_C_FOUND:BOOL:CACHED=true -DMPI_CXX_FOUND:BOOL:CACHED=true -DMPI_C:STR:CACHED=mpicc -DMPI_CXX:STR:CACHED=mpicxx -DMPI_INCLUDE_PATH:STR:CACHED=${LOCALBASE}/mpi/openmpi/include -DMPI_C_COMPILE_FLAGS:STR:CACHED=-I${LOCALBASE}/mpi/openmpi/include -DMPI_CXX_COMPILE_FLAGS:STR:CACHED=-I${LOCALBASE}/mpi/openmpi/include -DMPI_CXX_LINK_FLAGS:STR:CACHED=-Wl,-rpath,${LOCALBASE}/mpi/openmpi/lib -L${LOCALBASE}/mpi/openmpi/lib -lmpi_cxx -lmpi
DFLY_UNMAINTAINED= yes
.include <bsd.port.options.mk>

.if ${ARCH} == aarch64
CMAKE_ON=	HAVE_ARM8
.elif ${ARCH} == x86_64 || ${ARCH} == i386
CMAKE_ON=	HAVE_SSE2
.elif ${ARCH} == powerpc64le
CMAKE_ON=	HAVE_POWER8
.endif

dfly-patch:
	${REINPLACE_CMD} -e '/find_package(MPI QUIET)/d' -e '/find_package(MPI)/d' \
		${WRKSRC}/src/CMakeLists.txt \
		${WRKSRC}/lib/ffindex/src/CMakeLists.txt \
		${WRKSRC}/lib/ffindex/src/mpq/CMakeLists.txt

.include <bsd.port.mk>

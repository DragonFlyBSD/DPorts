PORTNAME=	gbtolib
DISTVERSION=	3.0.3
CATEGORIES=	science # chemistry, physics
MASTER_SITES=	https://zenodo.org/record/5798035/files/
DISTNAME=	GBTOLib-${DISTVERSION}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	High-performance library for evaluation of molecular integrals

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libopenblas.so:math/openblas

USES=		cmake fortran zip

CMAKE_ON=	BUILD_SHARED_LIBS
CMAKE_OFF=	BUILD_DOC BUILD_TESTING

OPTIONS_DEFINE=	MPI

MPI_CMAKE_BOOL=	WITH_MPI
MPI_CMAKE_ON=	-DMPIEXEC_EXECUTABLE=${LOCALBASE}/bin/mpiexec
MPI_BROKEN=	MPI build fails with error: Failed to detemine MPI integer interface.

.include <bsd.port.mk>

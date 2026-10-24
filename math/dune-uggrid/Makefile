PORTNAME=	dune-uggrid
DISTVERSIONPREFIX=	v
DISTVERSION=	2.11.0
PORTREVISION=	1
CATEGORIES=	math

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	DUNE framework: The UG Grid Manager
WWW=		https://www.dune-project.org/

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING.LGPL-2.1

BUILD_DEPENDS=	openmpi>0:net/openmpi \
		vc>0:devel/vc
LIB_DEPENDS=	libdunecommon.so:math/dune-common \
		libopenblas.so:math/openblas \
		libtbb.so:devel/onetbb
RUN_DEPENDS=	openmpi>0:net/openmpi

USES=		cmake compiler:c++17-lang fortran pkgconfig python
USE_GITLAB=	yes
USE_LDCONFIG=	yes

GL_SITE=	https://gitlab.dune-project.org
GL_ACCOUNT=	staging
GL_TAGNAME=	79a63082b9990a0d652761b8365a99cfcdce5d87

CMAKE_ON=	BUILD_SHARED_LIBS
CMAKE_ARGS= -DTBB_INCLUDE_DIR=${LOCALBASE}/include -DTBB_LIBRARIES=${LOCALBASE}/lib/libtbb.so -DMPI_C_COMPILER="${LOCALBASE}/mpi/openmpi/bin/mpicc" -DMPI_CXX_COMPILER="${LOCALBASE}/mpi/openmpi/bin/mpicxx" -DMPI_Fortran_COMPILER="${LOCALBASE}/mpi/openmpi/bin/mpifort"

PLIST_SUB+=	DUNE_UGGRID_CMAKE_HASH=b7b1c3d0364bd29db6890bcd8ffa84e7

USE_GCC_VERSION= ${GCC_DEFAULT}
.include <bsd.port.mk>

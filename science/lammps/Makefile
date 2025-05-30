PORTNAME=	lammps
PORTVERSION=	${GH_TAGNAME:C/(stable|patch)_([0-9]{1,2})([A-Z][a-z][a-z])([0-9]{4})/\4.\3.\2/S/Jan/01/S/Feb/02/S/Mar/03/S/Apr/04/S/May/05/S/Jun/06/S/Jul/07/S/Aug/08/S/Sep/09/S/Oct/10/S/Nov/11/S/Dec/12/}
PORTREVISION=	2
CATEGORIES=	science

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Classical molecular dynamics code with a focus on materials modeling

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN_i386=	undefined reference to `__atomic_load'

LIB_DEPENDS=	libevent.so:devel/libevent \
		libfftw3.so:math/fftw3 \
		libhwloc.so:devel/hwloc2 \
		libnghttp2.so:www/libnghttp2 \
		libpciaccess.so:devel/libpciaccess \
		libssh2.so:security/libssh2 \
		libzstd.so:archivers/zstd

USES=		blaslapack:openblas cmake:noninja compiler:c++14-lang eigen:3 fortran gnome localbase:ldflags python shebangfix
USE_GNOME=	libxml2
USE_LDCONFIG=	yes
USE_PYTHON=	cython

USE_GITHUB=	yes
GH_TAGNAME=	stable_23Jun2022

SHEBANG_GLOB=	*.sh *.bash
SHEBANG_FILES=	lib/kokkos/bin/nvcc_wrapper

CMAKE_ON=	BUILD_SHARED_LIBS
CMAKE_SOURCE_PATH=	${WRKSRC}/cmake
CMAKE_ARGS=	-DBLA_VENDOR:STRING="OpenBLAS" ${CMAKE_ARGS_${CHOSEN_COMPILER_TYPE}} \
		-DPython_EXECUTABLE=${PYTHON_CMD}
CMAKE_ARGS_gcc=	-DBUILD_OMP:BOOL=false

# enable packages (for a complete list see STANDARD_PACKAGES in cmake/CMakeLists.txt)
CMAKE_ON+=	PKG_ASPHERE PKG_ATC PKG_AWPMD PKG_BOCS PKG_BODY PKG_BROWNIAN PKG_CG-DNA PKG_CG-SDK PKG_CLASS2
CMAKE_ON+=	PKG_COLLOID PKG_COLVARS PKG_COMPRESS PKG_DIELECTRIC PKG_DIFFRACTION PKG_DIPOLE PKG_DPD-BASIC PKG_DPD-MESO PKG_DPD-REACT PKG_DPD-SMOOTH
CMAKE_ON+=	PKG_DRUDE PKG_EFF PKG_EXTRA-COMPUTE PKG_EXTRA-DUMP PKG_EXTRA-FIX PKG_EXTRA-MOLECULE PKG_EXTRA-PAIR PKG_FEP PKG_GRANULAR PKG_H5MD
CMAKE_ON+=	PKG_INTERLAYER PKG_KIM PKG_KSPACE PKG_LATBOLTZ PKG_LATTE PKG_MACHDYN PKG_MANIFOLD PKG_MANYBODY PKG_MC
CMAKE_ON+=	PKG_MEAM PKG_MESSAGE PKG_MGPT PKG_MISC PKG_ML-IAP PKG_ML-RANN
CMAKE_ON+=	PKG_ML-SNAP PKG_MOFFF PKG_MOLECULE PKG_MOLFILE PKG_MPIIO PKG_ORIENT PKG_PERI PKG_PHONON
CMAKE_ON+=	PKG_PLUGIN PKG_PLUMED PKG_POEMS PKG_PTM PKG_PYTHON PKG_QEQ PKG_QMMM PKG_QTB PKG_REACTION PKG_REAXFF
CMAKE_ON+=	PKG_REPLICA PKG_RIGID PKG_SHOCK PKG_SMTBQ PKG_SPH PKG_SPIN PKG_SRD PKG_TALLY PKG_UEF
CMAKE_ON+=	PKG_VORONOI PKG_YAFF
# Packages requiring extra downloades or dependencies: PKG_MSCG PKG_ADIOS PKG_MDI PKG_MESONT PKG_ML-PACE PKG_NETCDF PKG_ML-QUIP PKG_SCAFACOS PKG_VTK
# PKG_ML-HDNNP downloads https://github.com/CompPhysVienna/n2p2/archive/v2.1.4.tar.gz

OPTIONS_DEFINE=		EXCEPTIONS JPEG PNG GZIP FFMPEG
OPTIONS_GROUP=		PARALLEL PACKAGES
OPTIONS_DEFAULT=	EXCEPTIONS MPI OPENMP JPEG PNG GZIP FFMPEG H5MD KIM KOKKOS LATTE PLUMED VORONOI ${OPTIONS_DEFAULT_${CHOSEN_COMPILER_TYPE}}
OPTIONS_SUB=		yes
PARALLEL_DESC=		Enable parallelizations:
PACKAGES_DESC=		Enable packages:
OPTIONS_GROUP_PARALLEL=	MPI OPENMP ${OPTIONS_DEFINE_${CHOSEN_COMPILER_TYPE}}
OPTIONS_GROUP_PACKAGES=	H5MD KIM KOKKOS LATTE PLUMED VORONOI VTK

EXCEPTIONS_DESC=	Enable the use of C++ exceptions
EXCEPTIONS_CMAKE_BOOL=	LAMMPS_EXCEPTIONS

MPI_CMAKE_BOOL=		BUILD_MPI PKG_MPIIO PKG_USER-LB
MPI_LIB_DEPENDS=	libmpi.so:net/mpich
MPI_USES=		compiler:c11

FFMPEG_CMAKE_BOOL=	WITH_FFMPEG
FFMPEG_BUILD_DEPENDS=	ffmpeg:multimedia/ffmpeg
FFMPEG_RUN_DEPENDS=	ffmpeg:multimedia/ffmpeg

JPEG_CMAKE_BOOL=	WITH_JPEG
JPEG_USES=		jpeg

PNG_CMAKE_BOOL=		WITH_PNG
PNG_LIB_DEPENDS=	libpng.so:graphics/png

GZIP_DESC=		Enable GZIP support
GZIP_CMAKE_BOOL=	WITH_GZIP

H5MD_DESC=		USER-H5MD package based on libhdf5
H5MD_CMAKE_BOOL=	PKG_USER-H5MD
H5MD_LIB_DEPENDS=	libhdf5.so:science/hdf5 \
			libsz.so:science/libaec

KIM_DESC=		KIM package based on the OpenKim library/repository
KIM_USES=		pkgconfig
KIM_CMAKE_BOOL=		PKG_KIM
KIM_CMAKE_ON=		-DDOWNLOAD_KIM:BOOL=OFF
KIM_LIB_DEPENDS=	libkim-api.so:science/kim-api \
			libcurl.so:ftp/curl
KIM_RUN_DEPENDS=	openkim-models>0:science/openkim-models

KOKKOS_DESC=		kokkos package based on the libkokkos library
KOKKOS_CMAKE_BOOL=	PKG_KOKKOS EXTERNAL_KOKKOS
KOKKOS_LIB_DEPENDS=	libkokkoscore.so:devel/kokkos

LATTE_DESC=		latte package based on the liblatte library
LATTE_CMAKE_BOOL=	PKG_LATTE
LATTE_LIB_DEPENDS=	liblatte.so:science/latte

PLUMED_DESC=		plumed package based on the plumed library
PLUMED_USES=		pkgconfig
PLUMED_CMAKE_BOOL=	PKG_USER-PLUMED
PLUMED_CMAKE_ON=	-DPLUMED_MODE=shared
PLUMED_LIB_DEPENDS=	libplumed.so:science/plumed

VORONOI_DESC=		voro++, Voronoi tessellation package
VORONOI_CMAKE_BOOL=	PKG_VORONOI
VORONOI_LIB_DEPENDS=	libvoro++.so:science/voro++

VTK_DESC=		USER-VTK package based on the external vtk package
VTK_CMAKE_BOOL=		PKG_USER-VTK
VTK_CMAKE_ON=		-DVTK_DIR:PATH=${LOCALBASE}/lib/cmake/vtk-9.1
VTK_USES=		qt:5 xorg
VTK_USE=		qt=core,gui,sql,widgets xorg=ice,sm,x11,xext,xt
VTK_LIB_DEPENDS=	libvtkImagingMath-8.2.so:math/vtk8 \
			libexpat.so:textproc/expat2 \
			libfreetype.so:print/freetype2 \
			libtiff.so:graphics/tiff

PORTSCOUT=	ignore:1 # due to a special version tagging scheme that this project uses portscout fails to find new versions, watching their GitHub release page instead

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MOPENMP}
CMAKE_ARGS+=	-DBUILD_OMP:BOOL=true
.endif

xpost-patch:
	# adjust SHELL in Makefile
	@${REINPLACE_CMD} 's|SHELL = /bin/bash|SHELL = ${LOCALBASE}/bin/bash|' ${WRKSRC}/src/Makefile
	# fix python version, also see https://github.com/lammps/lammps/issues/3098, https://github.com/lammps/lammps/issues/3099
	@${FIND} ${WRKSRC} -name "CMakeLists.txt" -o -name "*.cmake" | ${XARGS} ${REINPLACE_CMD} -e ' \
		s|find_package(Python3 REQUIRED |find_package(Python $${FREEBSD_PYTHON_VER} EXACT REQUIRED |; \
		s|find_package(Python 3.5 COMPONENTS |find_package(Python $${FREEBSD_PYTHON_VER} EXACT COMPONENTS |; \
		s|find_package(Python 3.6 COMPONENTS |find_package(Python $${FREEBSD_PYTHON_VER} EXACT COMPONENTS |; \
		s|find_package(Python3 REQUIRED |find_package(Python $${FREEBSD_PYTHON_VER} EXACT REQUIRED |; \
		s|find_package(Python COMPONENTS |find_package(Python3 $${FREEBSD_PYTHON_VER} EXACT COMPONENTS |; \
		s|find_package(Python3 COMPONENTS |find_package(Python3 $${FREEBSD_PYTHON_VER} EXACT COMPONENTS |; \
		s|find_package(Python QUIET COMPONENTS |find_package(Python3 $${FREEBSD_PYTHON_VER} EXACT QUIET COMPONENTS |; \
		s|find_package(Python REQUIRED COMPONENTS |find_package(Python3 $${FREEBSD_PYTHON_VER} EXACT REQUIRED COMPONENTS | \
		'

post-patch-FFMPEG-off:
	@${REINPLACE_CMD} 's|find_program(FFMPEG_EXECUTABLE|#&|' ${WRKSRC}/cmake/CMakeLists.txt

post-install:
	@${RM} -r ${STAGEDIR}${PREFIX}/lib/python*

.include <bsd.port.mk>

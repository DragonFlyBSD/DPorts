# $FreeBSD$
#
# Fortran support
#
# MAINTAINER:	fortran@FreeBSD.org
#
# Feature:	fortran
# Usage:	USES=fortran
# Valid ARGS:	gcc (default), ifort

.if !defined(_INCLUDE_USES_FORTRAN_MK)
_INCLUDE_USES_FORTRAN_MK=	yes

.if !defined(fortran_ARGS)
fortran_ARGS=	gcc
.endif

.if ${fortran_ARGS} == gcc
BUILD_DEPENDS+= ${LOCALBASE}/gcc-aux/bin/gfortran:${PORTSDIR}/lang/gcc-aux
RUN_DEPENDS+=	${LOCALBASE}/gcc-aux/bin/gfortran:${PORTSDIR}/lang/gcc-aux
F77=		${LOCALBASE}/gcc-aux/bin/gfortran
FC=		${LOCALBASE}/gcc-aux/bin/gfortran
FFLAGS+=	-Wl,-rpath=${LOCALBASE}/gcc-aux/lib
FCLAGS+=	-Wl,-rpath=${LOCALBASE}/gcc-aux/lib
LDFLAGS+=	-Wl,-rpath=${LOCALBASE}/gcc-aux/lib \
		-L${LOCALBASE}/gcc-aux/lib
.elif ${fortran_ARGS} == ifort
BUILD_DEPENDS+=	${LOCALBASE}/intel_fc_80/bin/ifort:${PORTSDIR}/lang/ifc
RUN_DEPENDS+=	${LOCALBASE}/intel_fc_80/bin/ifort:${PORTSDIR}/lang/ifc
F77=		${LOCALBASE}/intel_fc_80/bin/ifort
FC=		${LOCALBASE}/intel_fc_80/bin/ifort
.else
IGNORE=		USES=fortran: invalid arguments: ${fortran_ARGS}
.endif

CONFIGURE_ENV+=	F77="${F77}" FC="${FC}" FFLAGS="${FFLAGS}" FCFLAGS="${FCFLAGS}"
MAKE_ENV+=	F77="${F77}" FC="${FC}" FFLAGS="${FFLAGS}" FCFLAGS="${FCFLAGS}"

.endif

# bsd.gcc.df.mk  - Reaction to USE_GCC on DragonFly
#
# The primary base compiler is used is possible, otherwise the ports default
# is used unless there's a hard specification.
#
# For DragonFly 5.4+, the primary base compiler is gcc80,
# for DragonFly 4.1 - 5.3, the primary base compiler is gcc50 and for earlier
# releases, the primary base compiler is gcc47.  The avoidance of the use of
# the alternate compiler is intentional.

.if !defined(_INCLUDE_BSD_DF_GCC_MK)
_INCLUDE_BSD_DF_GCC_MK=	yes

.include "${PORTSDIR}/Mk/bsd.default-versions.mk"

.undef PORT_COMPILER
.undef BASE_COMPILER

BASE_COMPILER=gcc80

.if defined(USE_GCC_VERSION) && ${USE_GCC_VERSION:M[679]}
.   if ${BASE_COMPILER:Mgcc80}
PORT_COMPILER=${USE_GCC_VERSION}
.   endif
.endif

.if defined (PORT_COMPILER)

USE_BINUTILS=		yes
V:=			${PORT_COMPILER:S/.//}
X:=			${PORT_COMPILER:S/.//:S/-devel//}
BUILD_DEPENDS+=		gcc${X}:lang/gcc${V}
RUN_DEPENDS+=		gcc${X}:lang/gcc${V}
_GCC_RUNTIME:=		${LOCALBASE}/lib/gcc${V}

CC:=			gcc${X}
CXX:=			g++${X}
CPP:=			cpp${X}
CFLAGS+=		-Wl,-rpath=${_GCC_RUNTIME}
CXXFLAGS+=		-Wl,-rpath=${_GCC_RUNTIME}
LDFLAGS+=		-Wl,-rpath=${_GCC_RUNTIME} -L${_GCC_RUNTIME}

.else   # v--  DRAGONFLY BASE COMPILERS --v

CC:=			gcc
CXX:=			g++
CPP:=			cpp
CONFIGURE_ENV+=		CCVER=${BASE_COMPILER}
MAKE_ENV+=		CCVER=${BASE_COMPILER}

.endif


test-gcc:
	@echo USE_GCC_VERSION=${USE_GCC_VERSION}
.if defined(IGNORE)
	@echo "IGNORE: ${IGNORE}"
.else
	@echo CC=${CC}
	@echo CXX=${CXX}
	@echo CPP=${CPP}
	@echo CFLAGS=\"${CFLAGS}\"
	@echo CXXFLAGS=\"${CXXFLAGS}\"
	@echo LDFLAGS=\"${LDFLAGS}\"
	@echo CONFIGURE_ENV=${CONFIGURE_ENV}
	@echo MAKE_ENV=${MAKE_ENV}
	@echo "BUILD_DEPENDS=${BUILD_DEPENDS}"
	@echo "RUN_DEPENDS=${RUN_DEPENDS}"
.endif

.endif

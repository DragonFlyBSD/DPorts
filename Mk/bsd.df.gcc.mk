# bsd.gcc.df.mk  - Reaction to USE_GCC on DragonFly
#
# The primary base compiler is used is possible, otherwise the ports default
# is used unless there's a hard specification.
#
# For DragonFly 5.3+, the primary base compiler is gcc80,
# for DragonFly 4.1+, the primary base compiler is gcc50 and for earlier
# releases, the primary base compiler is gcc47.  The avoidance of the use of
# the alternate compiler is intentional.

.if !defined(_INCLUDE_BSD_DF_GCC_MK)
_INCLUDE_BSD_DF_GCC_MK=	yes

.include "${PORTSDIR}/Mk/bsd.default-versions.mk"

.undef PORT_COMPILER
.undef BASE_COMPILER

.if ${USE_GCC} == 4.8 || ${USE_GCC} == 4.9
PORT_COMPILER=${USE_GCC}
.else
.  if ${USE_GCC:M6*}
PORT_COMPILER=6
.  else
.    if ${USE_GCC:tu} == NOT5 || ${USE_GCC:tu} == DEFAULT_NOT5
PORT_COMPILER=${LANG_GCC_IS}
.    else
.     if exists (/usr/libexec/gcc80/CC)
BASE_COMPILER=gcc80
.     else
BASE_COMPILER=gcc50
.     endif
.    endif
.  endif
.endif

.if defined (PORT_COMPILER)

USE_BINUTILS=		yes
V:=			${PORT_COMPILER:S/.//}
X:=			${PORT_COMPILER:S/.//:S/-devel//}
.  if "${PORT_COMPILER}" == "${LANG_GCC_IS}"
BUILD_DEPENDS+=		gcc${X}:lang/gcc
RUN_DEPENDS+=		gcc${X}:lang/gcc
.  else
BUILD_DEPENDS+=		gcc${X}:lang/gcc${V}
RUN_DEPENDS+=		gcc${X}:lang/gcc${V}
.  endif
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
	@echo USE_GCC=${USE_GCC}
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

# bsd.gcc.df.mk  - Reaction to USE_GCC on DragonFly
#
# The primary base compiler is used is possible, otherwise the ports default
# is used unless there's a hard specification.
#
# For DragonFly 4.1+, the primary base compiler is gcc50 and for earlier
# releases, the primary base compiler is gcc47.  The avoidance of the use of
# the alternate compiler is intentional.

.include "${PORTSDIR}/Mk/bsd.default-versions.mk"

.undef PORT_COMPILER
.undef BASE_COMPILER

.if ${DFLYVERSION} < 400105
.   if ${USE_GCC} == 4.8 || ${USE_GCC} == 4.8+ 
PORT_COMPILER=4.8
.   elif ${USE_GCC} == 4.9 || ${USE_GCC} == 4.9+
PORT_COMPILER=4.9
.   elif ${USE_GCC} == DEFAULT_NOT5
PORT_COMPILER=${LANG_GCC_IS}
.   else
BASE_COMPILER=gcc47
.   endif
.else  # v-- Release 4.2 and later --v
.   if ${USE_GCC} == 4.8 || ${USE_GCC} == 4.9
PORT_COMPILER=${USE_GCC}
.   else
.      if ${USE_GCC:tu} == NOT5 || ${USE_GCC:tu} == DEFAULT_NOT5
PORT_COMPILER=${LANG_GCC_IS}
.      else
BASE_COMPILER=gcc50
.      endif
.   endif
.endif

.if defined (PORT_COMPILER)

USE_BINUTILS=		yes
V:=			${PORT_COMPILER:S/.//}
.  if "${PORT_COMPILER}" == "${LANG_GCC_IS}"
BUILD_DEPENDS+=		gcc${V}:${PORTSDIR}/lang/gcc
RUN_DEPENDS+=		gcc${V}:${PORTSDIR}/lang/gcc
.  else
BUILD_DEPENDS+=		gcc${V}:${PORTSDIR}/lang/gcc${V}
RUN_DEPENDS+=		gcc${V}:${PORTSDIR}/lang/gcc${V}
.  endif
_GCC_RUNTIME:=		${LOCALBASE}/lib/gcc${V}

CC:=			gcc${V}
CXX:=			g++${V}
CPP:=			cpp${V}
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

# Build with the DPorts LLVM toolchain and libc++ instead of base gcc and
# libstdc++.
#
# USES=dfly-libcxx[:<version>]
#
#	<none>:		use ${LLVM_DEFAULT}
#	<version>:	use that LLVM generation, e.g. dfly-libcxx:22
#
# Sets USE_CLANG_FALLBACK, which bsd.port.mk turns into CC/CXX/CPP=clang<v>
# and a BUILD_DEPENDS on devel/llvm<v>, and depends on devel/libcxx<v>.
# The compiler and the standard library are always the same generation:
# the clang config file that selects libc++ ships with devel/libcxx<v> and
# sits next to clang<v>.
#
# It does not set -stdlib=libc++, the header path or the library path.
# That config file carries all three, so a port cannot spell them wrong.
# find-lib.sh reads ${LOCALBASE}/libdata/ldconfig/*, where devel/libcxx<v>
# registers its library directory, so LIB_DIRS needs nothing either.
#
# WHEN IT WORKS
#
# libc++ and libstdc++ mangle std:: types differently -- std::__1::foo
# against std::__cxx11::foo -- and a call links only when both sides
# agree.  So this is safe exactly when no C++ dependency exposes std::
# types in the API this port calls:
#
#	* dependencies with a C API, or no C++ dependencies at all
#	* dependencies vendored into the port's own source
#	* dependencies whose API uses their own types, not std:: ones
#	  (Qt is the large example: QString, not std::string)
#
# Otherwise the dependency adopts this knob first -- the set grows from
# the bottom of the dependency graph up.  No static check decides this in
# advance; symbol counting does not work.  Build it, and read the link
# errors, which name the crossing exactly.
#
# USES=compiler in the same port is not a conflict: bsd.port.mk applies
# USE_CLANG_FALLBACK after the USES includes have run.

.ifndef _INCLUDE_USES_DFLY_LIBCXX_MK
_INCLUDE_USES_DFLY_LIBCXX_MK=	yes

.if empty(dfly-libcxx_ARGS)
DFLY_LIBCXX_VER=	${LLVM_DEFAULT}
.else
DFLY_LIBCXX_VER=	${dfly-libcxx_ARGS}
.endif

.if defined(USE_CLANG_FALLBACK) && empty(USE_CLANG_FALLBACK:Mdefault) && \
	${USE_CLANG_FALLBACK} != ${DFLY_LIBCXX_VER}
IGNORE=	USES=dfly-libcxx:${DFLY_LIBCXX_VER} disagrees with USE_CLANG_FALLBACK=${USE_CLANG_FALLBACK}
.endif

USE_CLANG_FALLBACK=	${DFLY_LIBCXX_VER}
LIB_DEPENDS+=		libc++.so.1:devel/libcxx${DFLY_LIBCXX_VER}

.endif

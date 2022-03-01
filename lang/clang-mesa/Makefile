PORTNAME=	clang
DISTVERSION=	13.0.1
PORTREVISION=	1
CATEGORIES=	lang
MASTER_SITES=	https://github.com/llvm/llvm-project/releases/download/llvmorg-${DISTVERSION}/
PKGNAMESUFFIX=	${LLVM_SUFFIX}
DISTNAME=	clang-${DISTVERSION}.src
DISTFILES=	clang-${DISTVERSION}.src${EXTRACT_SUFX}

MAINTAINER=	zrj@ef.irc
COMMENT=Clang smaller

LICENSE=	APACHE20 LLVM2
LICENSE_COMB=	multi

LICENSE_FILE_LLVM2=	${WRKSRC}/LICENSE.TXT
LICENSE_NAME_LLVM2=	Apache License 2.0 with LLVM Exceptions
LICENSE_PERMS_LLVM2=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

BUILD_DEPENDS=	llvm-mesa>0:graphics/llvm-mesa
LIB_DEPENDS=	libLLVM-mesa-13.so:graphics/llvm-libs-mesa
#USES+=		gnome
#USE_GNOME=	libxml2
# so that users do not need to know location of libclang-mesa.so
USE_LDCONFIG=	${LLVM_PREFIX}/lib

LLVM_RELEASE=	${DISTVERSION:C/rc.*//}
LLVM_MAJOR=	${LLVM_RELEASE:C/\.[0-9]\.[0-9]$//}
LLVM_SUFFIX=	-mesa

LLVM_DIR=	llvm${LLVM_SUFFIX}
LLVM_PREFIX=	${PREFIX}/${LLVM_DIR}
DATADIR=	${PREFIX}/share/${PORTNAME}${LLVM_SUFFIX}

USES=		cmake compiler:c++11-lib perl5 tar:xz shebangfix
USES+=		python:3.6+,build

SUB_FILES=	llvm-wrapper.sh
SUB_LIST=	LLVM_PREFIX="${LLVM_PREFIX}" LLVM_SUFFIX="${LLVM_SUFFIX}"

CMAKE_INSTALL_PREFIX=	${LLVM_PREFIX}
CMAKE_ARGS+=	-DLLVM_TARGETS_TO_BUILD="X86;AMDGPU"
CMAKE_ARGS+=	-DLLVM_ENABLE_RTTI=ON
CMAKE_ARGS+=	-DLLVM_HOST_TRIPLE=${CONFIGURE_TARGET}
CMAKE_ARGS+=	-DCMAKE_INSTALL_MANDIR:PATH="share/man"
CMAKE_ARGS+=	-DLLVM_PARALLEL_LINK_JOBS=1
CMAKE_ARGS+=	-DPython3_EXECUTABLE=${PYTHON_CMD}

CMAKE_ON+=	LLVM_LINK_LLVM_DYLIB
CMAKE_OFF+=	LLVM_ENABLE_LIBXML2

OPTIONS_SUB=	yes

PLIST_SUB+=	LLVM_RELEASE=${LLVM_RELEASE} \
		LLVM_SUFFIX=${LLVM_SUFFIX} \
		LLVM_MAJOR=${LLVM_MAJOR}

COMMANDS=	${CLANG_COMMANDS}
FIRST_COMMAND=	${COMMANDS:C/^/XXXX/1:MXXXX*:C/^XXXX//}

CONFIGURE_TARGET:=x86_64-portbld-${OPSYS:tl}${OSREL}

.include "${.CURDIR}/Makefile.COMMANDS"
.include "${.CURDIR}/Makefile.TUNING"

post-patch:
	${REINPLACE_CMD} -e 's|%%LLVM_SUFFIX%%|${LLVM_SUFFIX}|' \
	    ${WRKSRC}/tools/clang-format/clang-format.py \
	    ${WRKSRC}/tools/clang-format/clang-format-sublime.py \
	    ${WRKSRC}/tools/clang-format/git-clang-format

post-install:
	${INSTALL_SCRIPT} ${WRKDIR}/llvm-wrapper.sh \
	    ${STAGEDIR}${PREFIX}/bin/${FIRST_COMMAND}${LLVM_SUFFIX}
.for command in ${COMMANDS:C/^/XXXX/1:NXXXX*}
	${LN} -f ${STAGEDIR}${PREFIX}/bin/${FIRST_COMMAND}${LLVM_SUFFIX} \
	    ${STAGEDIR}${PREFIX}/bin/${command}${LLVM_SUFFIX}
.endfor
	${LN} -f ${STAGEDIR}${LLVM_PREFIX}/bin/clang \
	   ${STAGEDIR}${LLVM_PREFIX}/bin/clang-cpp
	${INSTALL_PROGRAM} ${WRKDIR}/.build/bin/clang-tblgen \
	    ${STAGEDIR}${LLVM_PREFIX}/bin/

.include <bsd.port.mk>

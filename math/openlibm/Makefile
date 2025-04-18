PORTNAME=	openlibm
DISTVERSIONPREFIX=	v
DISTVERSION=	0.8.0
CATEGORIES=	math

MAINTAINER=	iblis@hs.ntnu.edu.tw
COMMENT=	High quality system independent, portable, open source libm
WWW=		http://julialang.org/openlibm/

LICENSE=	MIT ISCL BSD2CLAUSE
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/LICENSE.md

BROKEN_armv6=	fails to compile: a parameter list without types is only allowed in a function definition
BROKEN_armv7=	fails to compile: a parameter list without types is only allowed in a function definition
BROKEN_mips=	fails to compile: No rule to make target mips/Make.files
BROKEN_mips64=	fails to compile: No rule to make target mips64/Make.files
BROKEN_riscv64=	fails to compile: No rule to make target riscv64/Make.files

USES=		gmake
USE_GITHUB=	yes
GH_ACCOUNT=	JuliaMath
USE_LDCONFIG=	yes

.include <bsd.port.options.mk>

.if ${ARCH:Mpowerpc*}
USES+=		compiler:gcc-c++11-lib
.else
USES+=		compiler:c11
.endif

.include <bsd.port.pre.mk>

MAKE_ENV+=	prefix=${PREFIX} ${MAKE_ENV_${CHOSEN_COMPILER_TYPE}}
MAKE_ENV_gcc=	USEGCC=1 USECLANG=0
MAKE_ENV_clang=	USEGCC=0 USECLANG=1

TEST_TARGET=	check

post-patch:
	${REINPLACE_CMD} -e 's/USEGCC =/USEGCC ?=/g' \
		-e 's/USECLANG =/USECLANG ?=/g' \
		${WRKSRC}/Make.inc

# Do not add GCC_DEFAULT to the prefix to allow building with base gcc
.       if ${OPSYS} == "FreeBSD"
	${REINPLACE_CMD} -e '/TOOLPREFIX)gcc/s/$$/${GCC_DEFAULT}/g' \
		${WRKSRC}/Make.inc
.       endif

.include <bsd.port.post.mk>

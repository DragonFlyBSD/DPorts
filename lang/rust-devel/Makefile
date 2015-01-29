# Created by: Jyun-Yan You <jyyou@cs.nctu.edu.tw>
# DragonFly port: Michael Neumann <mneumann@ntecs.de>

PORTNAME=	rust-devel
PORTVERSION=	1.0.0.20150128
CATEGORIES=	lang
MASTER_SITES=	http://www.ntecs.de/downloads/rust/:bootstrap \
		http://static.rust-lang.org/dist/2015-01-28/:rust \

EXTRACT_SUFX=	.tar.gz
DIST_SUBDIR=	${PORTNAME}

RUST_SOURCE=	rustc-nightly-src${EXTRACT_SUFX}
RUST_BOOT=	rust-stage0-${RUST_BOOT_SIG}.tar.bz2
RUST_BOOT_SIG=	2015-01-20-9006c3c-dragonfly-x86_64-0bb1d3eedbcd0b36ab01e4ac0539fb8a393c348d

WRKSRC=		${WRKDIR}/rustc-nightly

DISTFILES=	${RUST_BOOT}:bootstrap \
		${RUST_SOURCE}:rust

EXTRACT_ONLY=${RUST_SOURCE}

MAINTAINER=	mneumann@ntecs.de
COMMENT=	Language with a focus on memory safety and concurrency

LICENSE=	APACHE20 \
		MIT
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE-APACHE \
		${WRKSRC}/LICENSE-MIT

ONLY_FOR_ARCHS=	amd64
ONLY_FOR_REASON=	requires prebuilt bootstrap compiler

USES=		gmake perl5 python:2
HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-docs --mandir=${MANPREFIX}/man
MAKE_ENV=	SNAPSHOT_FILE=${DISTDIR}/${PORTNAME}/${RUST_BOOT}
USE_LDCONFIG=	yes
USE_PERL5=	build

post-build:
	@${ECHO_MSG} "Please `make check` to run regression tests"

check: build
	@cd ${WRKSRC}; ${SETENV} ${MAKE_ENV} \
		${MAKE_CMD} ${_MAKE_JOBS} ${MAKE_ARGS} check

.include <bsd.port.mk>

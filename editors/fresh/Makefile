PORTNAME=	fresh
DISTVERSIONPREFIX=	v
DISTVERSION=	0.5.1
CATEGORIES=	editors

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Terminal based IDE & text editor: easy, powerful and fast
WWW=		https://getfresh.dev

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/../../LICENSE

BUILD_DEPENDS=	${LOCALBASE}/llvm${LLVM_DEFAULT}/lib/libclang.so:devel/llvm${LLVM_DEFAULT}
LIB_DEPENDS=	libonig.so:devel/oniguruma

USES=		cargo

USE_GITHUB=	yes
GH_ACCOUNT=	sinelaw

WRKSRC_SUBDIR=	crates/fresh-editor
CARGO_VENDOR_DIR=	${WRKDIR}/cargo-crates

PLIST_FILES=	bin/fresh

CARGO_ENV= LIBCLANG_PATH=${LOCALBASE}/llvm${LLVM_DEFAULT}/lib
USES:= ${USES:S/cargo/cargo:extra/}
PATCH_WRKSRC= ${WRKDIR}
dfly-patch:
	${REINPLACE_CMD} -e 's|cfg(target_os = "freebsd")|cfg(any(target_os = "freebsd", target_os = "dragonfly"))|' \
		${WRKSRC:H}/fresh-core/Cargo.toml ${WRKSRC:H}/fresh-plugin-runtime/Cargo.toml

.include <bsd.port.mk>

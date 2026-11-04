PORTNAME=	cxx-rust-cssparser
PORTVERSION=	1.1.0
CATEGORIES=	devel
MASTER_SITES=	KDE/stable/cxx-rust-cssparser
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} # workaround for USES=cargo

MAINTAINER=	kde@FreeBSD.org
COMMENT=	C++ library for parsing CSS using the Rust cssparser crate
WWW=		https://invent.kde.org/libraries/cxx-rust-cssparser

BUILD_DEPENDS= ${LOCALBASE}/share/cmake/Corrosion.cmake:devel/corrosion ${LOCALBASE}/include/fmt/format.h:devel/libfmt

USES=		cargo cmake kde:6 tar:xz
USE_KDE=	ecm:build
USE_LDCONFIG=	yes

CARGO_BUILD=		no
CARGO_INSTALL=		no
CARGO_SRC_SUBDIR=	rust
CARGO_TARGET_DIR=	${WRKSRC}/target

CMAKE_OFF=	BUILD_DOCS

PLIST_SUB=	SHLIB_VER=${PORTVERSION}

CXXFLAGS= -DFMT_HEADER_ONLY -I${LOCALBASE}/include
dfly-patch:
	${REINPLACE_CMD} -e '/^#include <format>$$/d' ${WRKSRC}/cpp/Value.h
	${REINPLACE_CMD} -e 's|^#include <format>$$|#include <fmt/format.h>|' \
		-e 's|std::format(|fmt::format(|g' \
		-e 's|std::vformat(|fmt::vformat(|g' \
		-e 's|std::make_format_args(|fmt::make_format_args(|g' \
		${WRKSRC}/cpp/Color.cpp ${WRKSRC}/cpp/Selector.cpp ${WRKSRC}/cpp/Value.cpp
	${REINPLACE_CMD} -e 's|CMAKE_SYSTEM_NAME MATCHES "FreeBSD"|CMAKE_SYSTEM_NAME MATCHES "FreeBSD\|DragonFly"|' \
		${WRKSRC}/cpp/CMakeLists.txt

.include <bsd.port.mk>

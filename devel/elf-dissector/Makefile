PORTNAME=	elf-dissector
DISTVERSION=	0.0.1
PORTREVISION=	6
CATEGORIES=	devel kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Tools for inspecting, analyzing and optimizing ELF files
WWW=		https://invent.kde.org/sdk/elf-dissector

LICENSE=	LGPL20+
LICENSE_FILE=	${WRKSRC}/LICENSES/LGPL-2.0-or-later.txt

BUILD_DEPENDS=	binutils>=2.44:devel/binutils \
		gnulibiberty>=2.44:devel/gnulibiberty
LIB_DEPENDS=	libcapstone.so:devel/capstone \
		libopcodes-2.44.so:devel/binutils

USES=		cmake compiler:c++14-lang desktop-file-utils gettext-runtime \
		kde:6 pkgconfig qt:6
USE_KDE=	ecm:build
USE_QT=		base tools:build

KDE_INVENT=	a0d00720afb72d81256564caac21f050097ae190 sdk

USES+= localbase:ldflags
BUILD_DEPENDS+= bsdelf>0:devel/bsdelf
CMAKE_ARGS= -DCMAKE_CXX_STANDARD_INCLUDE_DIRECTORIES=${LOCALBASE}/bsdelf/include
dfly-patch:
	${REINPLACE_CMD} -e 's@FreeBSD@DragonFly@g' \
			 -e "s@Binutils::Iberty Binutils::Opcodes@Binutils::Opcodes Binutils::Iberty@g" \
		${WRKSRC}/src/lib/CMakeLists.txt \
		${WRKSRC}/src/ui/CMakeLists.txt \
		${WRKSRC}/tests/auto/CMakeLists.txt

.include <bsd.port.mk>

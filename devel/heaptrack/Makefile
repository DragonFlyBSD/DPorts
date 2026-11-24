PORTNAME=	heaptrack
DISTVERSION=	1.5.0
PORTREVISION=	10
CATEGORIES=	devel kde
MASTER_SITES=	KDE/stable/${PORTNAME}/

PATCH_SITES=	https://invent.kde.org/sdk/heaptrack/-/commit/
PATCHFILES+=	2de688e02fbc5ff96fcf29ad3af962e8035824eb.patch:-p1 # Support KChart6
PATCHFILES+=	38fd1d7b0ff53a35ed7c4ef241c21c8c06e1efb2.patch:-p1 # Use QString for KConfigGroup names

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Heap memory profiler
WWW=		https://github.com/KDE/heaptrack

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSES/GPL-2.0-or-later.txt

LIB_DEPENDS=	libKChart6.so:graphics/kdiagram-qt6 \
		libboost_regex.so:devel/boost-libs \
		libdw.so:devel/elfutils \
		libunwind.so:devel/libunwind \
		libzstd.so:archivers/zstd

USES=		cmake compiler:c++17-lang desktop-file-utils gl gettext-tools \
		kde:6 localbase qt:6 tar:xz xorg
USE_GL=		gl opengl # GLX
USE_KDE=	colorscheme completion config configwidgets coreaddons i18n \
		iconthemes itemmodels jobwidgets kio service solid \
		threadweaver widgetsaddons \
		ecm:build
USE_QT=		base svg
USE_XORG=	x11

CMAKE_ON=	HEAPTRACK_USE_QT6

CFLAGS= -D__WORDSIZE=64
LIB_DIRS= /lib /usr/lib ${LOCALBASE}/lib ${LOCALBASE}/lib/elfutils
CMAKE_ARGS= -DLIBDW_LIBRARIES=${LOCALBASE}/lib/elfutils/libdw.so
CXXFLAGS= -I${LOCALBASE}/include/elfutils
dfly-patch:
	${REINPLACE_CMD} -e 's@FreeBSD@DragonFly@g' \
		${WRKSRC}/src/track/CMakeLists.txt \
		${WRKSRC}/tests/auto/CMakeLists.txt \
		${WRKSRC}/src/track/heaptrack.sh.cmake \
		${WRKSRC}/CMakeLists.txt
	# Take the FreeBSD code paths (rtld's unrelocated dynamic tables,
	# sysctl for the exe and arguments); RSS keeps its DragonFly branch.
	cd ${WRKSRC}/src/track && ${REINPLACE_CMD} \
		-e 's/^#ifdef __FreeBSD__$$/#if defined(__FreeBSD__) || defined(__DragonFly__)/' \
		-e 's/^#elif defined(__FreeBSD__)$$/#elif defined(__FreeBSD__) || defined(__DragonFly__)/' \
		heaptrack_env.cpp heaptrack_inject.cpp libheaptrack.cpp

.include <bsd.port.mk>

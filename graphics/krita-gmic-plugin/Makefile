PORTNAME=	gmic
DISTVERSIONPREFIX=	v
DISTVERSION=	3.7.4.1
CATEGORIES=	graphics kde
MASTER_SITES=	https://github.com/vanyossi/${PORTNAME}/releases/download/v${PORTVERSION}/
PKGNAMEPREFIX=	krita-
PKGNAMESUFFIX=	-plugin
DISTNAME=	${PORTNAME}-${PORTVERSION}
DIST_SUBDIR=	KDE/${PKGBASE}/${PORTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Krita native plugin for G'MIC
WWW=		https://github.com/vanyossi/gmic

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/gmic-qt/COPYING

BUILD_DEPENDS=	bash:shells/bash \
		gmake:devel/gmake
LIB_DEPENDS=	libcurl.so:ftp/curl \
		libfftw3.so:math/fftw3 \
		libkritaqmicinterface.so:graphics/krita \
		libpng16.so:graphics/png

USES=		cmake compiler:c++17-lang kde:6 pkgconfig qt:6 shebangfix xorg
USE_KDE=	coreaddons ecm:build
USE_QT=		base \
		tools:build
USE_XORG=	ice sm x11 xext

SHEBANG_FILES=	gmic-qt/translations/lrelease.sh \
		gmic-qt/translations/filters/csv2ts.sh \
		gmic-qt/translations/filters/ts2csv.sh

CMAKE_ARGS=	-DGMIC_QT_HOST:STRING="krita-plugin"
CMAKE_ON=	BUILD_WITH_QT6
CMAKE_OFF=	ENABLE_SYSTEM_GMIC
CMAKE_SOURCE_PATH=	${WRKSRC}/gmic-qt

WRKSRC=		${WRKDIR}/${PORTNAME}-${DISTVERSIONFULL}

PLIST_FILES=	lib/kritaplugins/krita_gmic_qt.so \
		share/gmic/gmic_cluts.gmz \
		share/gmic/gmic_denoise_cnn.gmz \
		share/gmic/gmic_lightleaks.gmz \
		share/gmic/gmic_scale2x_cnn.gmz

post-patch:
	${REINPLACE_CMD} "s,lrelease-qt5,${LRELEASE}," \
		${WRKSRC}/gmic-qt/translations/lrelease.sh
.include <bsd.port.mk>

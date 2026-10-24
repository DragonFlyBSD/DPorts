PORTNAME=	kpmcore
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	sysutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Partition Manager core library
WWW=		https://invent.kde.org/system/kpmcore

LIB_DEPENDS=	libpolkit-qt6-core-1.so:sysutils/polkit-qt-1@qt6

USES=		cmake gettext kde:6 qt:6 tar:xz
USE_KDE=	coreaddons i18n widgetsaddons \
		ecm:build
USE_QT=		base

BUILD_DEPENDS= cxxfs_gcc8>0:misc/cxxfs_gcc8
CXXFLAGS= -isystem ${LOCALBASE}/cxxfs_gcc8
LDFLAGS= -L${LOCALBASE}/cxxfs_gcc8
IGNORE= unmaintained, please request fixing to users mailing list
dfly-patch:
	${REINPLACE_CMD} -e 's@PolkitQt5-1::Core@& stdc++fs@g' \
		${WRKSRC}/src/util/CMakeLists.txt

.include <bsd.port.mk>

PORTNAME=	fcitx-libpinyin
PORTVERSION=	0.5.4
PORTREVISION=	2
CATEGORIES=	chinese
MASTER_SITES=	http://download.fcitx-im.org/${PORTNAME}/:body \
		http://download.fcitx-im.org/data/:data
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}:body \
		model.text.${_MODEL_VER}.tar.gz:data
DIST_SUBDIR=	fcitx
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	lichray@gmail.com
COMMENT=	Libpinyin support for Fcitx
WWW=		https://fcitx-im.org/wiki/Fcitx

LICENSE=	GPLv2

BUILD_DEPENDS=	bash:shells/bash
LIB_DEPENDS=	libfcitx-config.so:chinese/fcitx \
		libpinyin.so:chinese/libpinyin\
		libFcitxQt5WidgetsAddons.so:textproc/fcitx-qt5

USES=		cmake gettext gnome pkgconfig tar:xz

_MODEL_VER=	20161206

OPTIONS_DEFINE=	QT5
OPTIONS_DEFAULT_aarch64=	QT5
OPTIONS_DEFAULT_x86_64=	QT5
OPTIONS_DEFAULT_i386=	QT5
QT5_DESC=	Enable Qtr for dictmanager

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MQT5}
USES+=		qt:5
USE_QT=		qmake:build gui webengine buildtools:build
USE_LDCONFIG=	${PREFIX}/lib/fcitx/qt
PLIST_SUB+=	QT5=""
.else
CMAKE_ARGS+=	-DENABLE_QT=OFF
PLIST_SUB+=	QT5="@comment "
.endif

post-patch:
	@${CP} ${_DISTDIR}/model.text.${_MODEL_VER}.tar.gz ${WRKSRC}/data/.

.include <bsd.port.mk>

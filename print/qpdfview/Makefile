PORTNAME=	qpdfview
DISTVERSION=	0.5.0
PORTREVISION=	9
CATEGORIES=	print
MASTER_SITES=	https://launchpad.net/${PORTNAME}/trunk/${DISTVERSION}/+download/
DISTNAME=	${PORTNAME}-${DISTVERSION:S/.0$//}

MAINTAINER=	mce@FreeBSD.org
COMMENT=	Tabbed DjVu/PDF/PS document viewer
WWW=		https://launchpad.net/qpdfview

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libpoppler-qt6.so:graphics/poppler-qt6

USES=		compiler:c++11-lang desktop-file-utils gl pkgconfig qmake qt:6
USE_GL=		opengl
USE_LDCONFIG=	yes
USE_QT=		base svg tools:build

QMAKE_SOURCE_PATH=	${PORTNAME}.pro

OPTIONS_DEFINE=		CUPS DJVU PS SYNCTEX
OPTIONS_DEFAULT=	CUPS DJVU PS
OPTIONS_SUB=		yes

SYNCTEX_DESC=		SyncTeX support

CUPS_LIB_DEPENDS=	libcups.so:print/cups
CUPS_QMAKE_OFF=		CONFIG+=without_cups
DJVU_LIB_DEPENDS=	libdjvulibre.so:graphics/djvulibre
DJVU_QMAKE_OFF=		CONFIG+=without_djvu
PS_LIB_DEPENDS=		libspectre.so:print/libspectre
PS_QMAKE_OFF=		CONFIG+=without_ps
SYNCTEX_USES=		tex
SYNCTEX_USE=		TEX=synctex
SYNCTEX_QMAKE_OFF=	CONFIG+=without_synctex

post-patch:
	${REINPLACE_CMD} -e 's|/usr|${PREFIX}|g' ${WRKSRC}/${PORTNAME}.pri

pre-configure:
	cd ${WRKSRC} && ${LRELEASE} ${PORTNAME}.pro

.include <bsd.port.mk>

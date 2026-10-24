PORTNAME=	krename
DISTVERSION=	5.0.60
CATEGORIES=	sysutils kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${PORTVERSION}/src

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Powerful batch file renamer
WWW=		https://apps.kde.org/krename/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSES/GPL-2.0-or-later.txt

LIB_DEPENDS=	libtag.so:audio/taglib \
		libexiv2.so:graphics/exiv2 \
		libpodofo.so:graphics/podofo \
		libfreetype.so:print/freetype2

USES=		cmake gettext kde:6 pkgconfig qt:6 tar:xz xorg
USE_KDE=	archive completion config coreaddons crash i18n \
		iconthemes itemviews jobwidgets kio service \
		widgetsaddons xmlgui \
		ecm:build
USE_QT=		5compat base declarative
USE_XORG=	x11

KDE_INVENT=	ff7a8dae14cd4efede5700ffd1c149b4013afba9 utilities

.include <bsd.port.mk>

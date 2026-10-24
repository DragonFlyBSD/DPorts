PORTNAME=	kseexpr
PORTVERSION=	6.0.0.0
CATEGORIES=	graphics kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${DISTVERSION:R}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Embeddable expression engine for Krita
WWW=		https://invent.kde.org/graphics/kseexpr

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/LICENSES/GPL-3.0-or-later.txt

USES=		bison compiler:c++14-lang cmake gettext kde:6 qt:6
USE_KDE=	i18n \
		ecm:build
USE_LDCONFIG=	yes
USE_QT=		base \
		tools:build

KDE_INVENT=	v${PORTVERSION}

CONFLICTS_INSTALL=	seexpr

PLIST_SUB=	SHLIB_VER=${PORTVERSION}

.include <bsd.port.mk>

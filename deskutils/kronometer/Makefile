PORTNAME=	kronometer
DISTVERSION=	2.3.70
CATEGORIES=	deskutils kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${DISTVERSION}/src/

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Stopwatch application
WWW=		https://apps.kde.org/kronometer/

USES=		cmake compiler:c++17-lang gettext kde:6 qt:6 tar:xz
USE_KDE=	coreaddons config crash i18n widgetsaddons xmlgui \
		doctools:build ecm:build
USE_QT=		base

KDE_INVENT=	173be7bde1740f07a443e838a3c3cf113b04ba1c utilities

.include <bsd.port.mk>

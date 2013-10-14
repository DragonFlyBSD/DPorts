# $FreeBSD: sysutils/nepomuk-widgets/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	nepomuk-widgets
PORTVERSION=	${KDE4_VERSION}
CATEGORIES=	sysutils kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	${KDE4_BRANCH}/${PORTVERSION}/src
DIST_SUBDIR=	KDE/${PORTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	The NepomukWidget libraries

USE_KDE4=	kdehier kdelibs kdeprefix automoc4 soprano nepomuk-core
USES=		cmake:outsource
USE_QT4=	corelib dbus gui moc_build qmake_build rcc_build uic_build
USE_XZ=		yes
USE_LDCONFIG=	yes

NO_STAGE=	yes
.include <bsd.port.mk>

# Created by: Stas Timokhin <stast@bsdportal.ru>
# $FreeBSD: deskutils/plasma-applet-cwp/Makefile 331797 2013-10-27 18:39:24Z dbn $

PORTNAME=	cwp
PORTVERSION=	1.8.3
CATEGORIES=	deskutils kde
MASTER_SITES=	http://kde-look.org/CONTENT/content-files/
PKGNAMEPREFIX=	plasma-applet-
DISTNAME=	98925-cwp-${PORTVERSION}

MAINTAINER=	dbn@FreeBSD.org
COMMENT=	Weather plasma applet for KDE4

LICENSE=	GPLv3

USE_BZIP2=	yes
USES=		cmake gettext
USE_KDE4=	automoc4 kdeprefix kdelibs
USE_QT4=	gui dbus network opengl svg phonon webkit xml \
		qmake_build moc_build rcc_build uic_build

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

NO_STAGE=	yes
.include <bsd.port.mk>

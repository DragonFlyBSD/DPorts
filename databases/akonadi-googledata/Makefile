# Created by: Troels Kofoed Jacobsen <tkjacobsen@gmail.com>
# $FreeBSD: databases/akonadi-googledata/Makefile 315830 2013-04-16 16:00:08Z rene $

PORTNAME=	akonadi-googledata
PORTVERSION=	1.2.0
PORTREVISION=	2
CATEGORIES=	databases
MASTER_SITES=	http://libgcal.googlecode.com/files/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Akonadi Resources for Google Contacts and Calendar

LIB_DEPENDS=	gcal:${PORTSDIR}/deskutils/libgcal

USE_BZIP2=	yes
USES=		cmake
USE_GETTEXT=	yes
USE_QT4=	qmake_build rcc_build moc_build uic_build dbus
USE_KDE4=	kdelibs kdeprefix pimlibs automoc4 akonadi

.include <bsd.port.mk>

# Created by: Shane Bell <decept0@gmail.com>
# $FreeBSD: x11/yakuake-kde4/Makefile 315669 2013-04-02 10:59:39Z miwi $

PORTNAME=	yakuake
PORTVERSION=	2.9.9
PORTREVISION=	1
CATEGORIES=	x11 kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${PORTVERSION}/src
PKGNAMESUFFIX=	-kde4

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Drop-down terminal emulator for KDE

LICENSE=	GPLv2

USE_XZ=		yes
USES=		cmake
USE_KDE4=	automoc4 kdelibs kdeprefix
USE_QT4=	qmake_build moc_build rcc_build uic_build
USE_GETTEXT=	yes
INSTALLS_ICONS=	yes
MAKE_JOBS_SAFE=	yes

PLIST_SUB=	VERSION="${PORTVERSION}"

.include <bsd.port.mk>

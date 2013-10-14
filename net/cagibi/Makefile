# Created by: Dima Panov <fluffy@FreeBSD.org>
# $FreeBSD: net/cagibi/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	cagibi
PORTVERSION=	0.2.0
CATEGORIES=	net devel
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	stable/cagibi

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE SSDP/uPNP proxy

USE_BZIP2=	yes
USES=		cmake
USE_KDE4=	automoc4
USE_QT4=	corelib network xml dbus \
		qmake_build moc_build rcc_build uic_build

NO_STAGE=	yes
.include <bsd.port.mk>

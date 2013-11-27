# Created by: Dima Panov <fluffy@FreeBSD.org>
# $FreeBSD: net/hupnp/Makefile 334927 2013-11-26 12:59:35Z makc $

PORTNAME=	hupnp
PORTVERSION=	1.0.0
PORTREVISION=	1
CATEGORIES=	net devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}
DISTNAME=	herqq-${PORTVERSION}

MAINTAINER=	fluffy@FreeBSD.org
COMMENT=	Library for building UPnP devices and control points

USES=		gmake qmake
USE_ZIP=	yes
USE_QT4=	corelib network xml dbus gui \
		moc_build rcc_build uic_build

QMAKE_ARGS=	"CONFIG+=DISABLE_AVTESTAPP DISABLE_TESTAPP"

.include <bsd.port.mk>

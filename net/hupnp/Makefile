# Created by: Dima Panov <fluffy@FreeBSD.org>
# $FreeBSD: net/hupnp/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	hupnp
PORTVERSION=	1.0.0
PORTREVISION=	1
CATEGORIES=	net devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}
DISTNAME=	herqq-${PORTVERSION}

MAINTAINER=	fluffy@FreeBSD.org
COMMENT=	A library for building UPnP devices and control points

USE_ZIP=	yes
USE_GMAKE=	yes
USE_QT4=	corelib network xml dbus gui \
		qmake_build moc_build rcc_build uic_build
QMAKE_ARGS=	PREFIX=${PREFIX} "CONFIG+=DISABLE_AVTESTAPP DISABLE_TESTAPP" herqq.pro

NO_STAGE=	yes
do-configure:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${QMAKE} ${QMAKEFLAGS} ${QMAKE_ARGS}

.include <bsd.port.mk>

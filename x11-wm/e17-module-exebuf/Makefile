# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: x11-wm/e17-module-exebuf/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	exebuf
PORTVERSION=	20130510
CATEGORIES=	x11-wm enlightenment
MASTER_SITES=	LOCAL/gblach/e17/modules/
PKGNAMEPREFIX=	e17-module-

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Exebuf program launcher module for e17

BUILD_DEPENDS=	enlightenment:${PORTSDIR}/x11-wm/enlightenment
RUN_DEPENDS=	enlightenment:${PORTSDIR}/x11-wm/enlightenment

DIST_SUBDIR=	e17
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USES=		gmake pkgconfig
USE_EFL=	edje libtool_hack modarch_hack

CONFIGURE_ARGS=	--disable-nls    # without this exebuf don't build

.include <bsd.port.mk>

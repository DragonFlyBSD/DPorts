# Created by: Stanislav Sedov <ssedov@mbsd.msk.ru>
# $FreeBSD: x11-wm/e17-module-winselector/Makefile 327786 2013-09-21 00:01:16Z bapt $

PORTNAME=	winselector
PORTVERSION=	20130510
CATEGORIES=	x11-wm enlightenment
MASTER_SITES=	LOCAL/gblach/e17/modules/
PKGNAMEPREFIX=	e17-module-

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	An e17 module to switch between windows

BUILD_DEPENDS=	enlightenment:${PORTSDIR}/x11-wm/enlightenment
RUN_DEPENDS=	enlightenment:${PORTSDIR}/x11-wm/enlightenment

DIST_SUBDIR=	e17
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USES=		gmake pkgconfig
USE_EFL=	edje libtool_hack modarch_hack

NO_STAGE=	yes
.include <bsd.port.mk>

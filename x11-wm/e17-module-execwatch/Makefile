# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: ports/x11-wm/e17-module-execwatch/Makefile,v 1.9 2012/12/22 21:10:31 svnexp Exp $

PORTNAME=	execwatch
PORTVERSION=	20120918
CATEGORIES=	x11-wm enlightenment
MASTER_SITES=	http://files.roorback.net/e17/modules/
PKGNAMEPREFIX=	e17-module-

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	An e17 module to show state of a periodically executed command

BUILD_DEPENDS=	enlightenment:${PORTSDIR}/x11-wm/enlightenment
RUN_DEPENDS=	enlightenment:${PORTSDIR}/x11-wm/enlightenment

DIST_SUBDIR=	e17
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_EFL=	edje libtool_hack modarch_hack
USE_GNOME=	pkgconfig

.include <bsd.port.mk>

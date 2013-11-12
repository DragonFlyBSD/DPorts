# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: devel/eio/Makefile 333129 2013-11-07 16:00:45Z gblach $

PORTNAME=	eio
PORTVERSION=	1.7.9
CATEGORIES=	devel enlightenment
MASTER_SITES=	http://download.enlightenment.org/releases/ \
		LOCAL/gblach/e17/

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Enlightenment Input/Output Library

LICENSE=	LGPL21

DIST_SUBDIR=	e17
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USES=		pathfix pkgconfig
USE_EFL=	eina eet ecore libtool_hack
USE_LDCONFIG=	yes

.include <bsd.port.mk>

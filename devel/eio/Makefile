# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: devel/eio/Makefile 328737 2013-09-29 21:43:08Z gblach $

PORTNAME=	eio
PORTVERSION=	1.7.8
CATEGORIES=	devel enlightenment
MASTER_SITES=	http://download.enlightenment.fr/releases/ \
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

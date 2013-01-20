# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: ports/graphics/evas_generic_loaders-gst/Makefile,v 1.5 2013/01/15 17:46:00 svnexp Exp $

PORTNAME=	gst
PORTVERSION=	1.7.5
CATEGORIES=	graphics enlightenment
MASTER_SITES=	http://download.enlightenment.fr/releases/ \
		LOCAL/gblach/e17/
PKGNAMEPREFIX=	evas_generic_loaders-
DISTNAME=	${PKGNAMEPREFIX}${PORTVERSION}

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Additional loader for Evas (GStreamer)

LICENSE=	GPLv2

DIST_SUBDIR=	e17
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_EFL=	eina
USE_GNOME=	gnomehack pkgconfig
USE_GSTREAMER=	good ffmpeg
USE_LDCONFIG=	yes

BINSRC=		${WRKSRC}/src/bin/${PORTNAME}

do-build:
	${MAKE} -C ${BINSRC}

do-install:
	${MAKE} -C ${BINSRC} install

.include <bsd.port.mk>

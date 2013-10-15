# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: graphics/evas_generic_loaders-gst/Makefile 330167 2013-10-12 18:24:50Z gblach $

PORTNAME=	gst
PORTVERSION=	1.7.8
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
USES=		pkgconfig
USE_EFL=	eina
USE_GSTREAMER=	good ffmpeg
USE_LDCONFIG=	yes

BINSRC=		${WRKSRC}/src/bin/${PORTNAME}

do-build:
	${MAKE} ${MAKE_ARGS} -C ${BINSRC}

do-install:
	${MAKE} ${MAKE_ARGS} -C ${BINSRC} install

.include <bsd.port.mk>

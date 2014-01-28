# $FreeBSD: graphics/kipi-plugin-videoslideshow/Makefile 340628 2014-01-21 18:17:23Z makc $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

LIB_DEPENDS=	libMagickCore.so:${PORTSDIR}/graphics/ImageMagick \
		libQtGStreamer-0.10.so:${PORTSDIR}/multimedia/gstreamer-qt4

KIPI_PLUGIN=	videoslideshow
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>

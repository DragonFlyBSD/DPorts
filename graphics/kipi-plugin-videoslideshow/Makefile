# $FreeBSD: graphics/kipi-plugin-videoslideshow/Makefile 315762 2013-04-08 17:10:56Z makc $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

LIB_DEPENDS=	MagickCore:${PORTSDIR}/graphics/ImageMagick \
		QtGStreamer-0.10:${PORTSDIR}/multimedia/gstreamer-qt4

KIPI_PLUGIN=	videoslideshow
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>

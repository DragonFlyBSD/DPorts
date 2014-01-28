# $FreeBSD: graphics/kipi-plugin-removeredeyes/Makefile 340628 2014-01-21 18:17:23Z makc $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

LIB_DEPENDS=	libopencv_legacy.so:${PORTSDIR}/graphics/opencv

KIPI_PLUGIN=	removeredeyes
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>

# $FreeBSD: graphics/kipi-plugin-removeredeyes/Makefile 335601 2013-12-04 02:51:00Z jhale $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
PORTREVISION=	1
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

LIB_DEPENDS=	libopencv_legacy.so:${PORTSDIR}/graphics/opencv

KIPI_PLUGIN=	removeredeyes
NO_STAGE=	yes
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>

# $FreeBSD: graphics/kipi-plugin-imgurexport/Makefile 340628 2014-01-21 18:17:23Z makc $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

LIB_DEPENDS=	libqjson.so:${PORTSDIR}/devel/qjson

KIPI_PLUGIN=	imgurexport
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>

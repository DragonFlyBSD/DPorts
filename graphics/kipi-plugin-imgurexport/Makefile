# $FreeBSD: graphics/kipi-plugin-imgurexport/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

LIB_DEPENDS=	qjson:${PORTSDIR}/devel/qjson

KIPI_PLUGIN=	imgurexport
NO_STAGE=	yes
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>

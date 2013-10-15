# $FreeBSD: graphics/kipi-plugin-vkontakte/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

LIB_DEPENDS=	kvkontakte:${PORTSDIR}/net/libkvkontakte

KIPI_PLUGIN=	vkontakte
NO_STAGE=	yes
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>

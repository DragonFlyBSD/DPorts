# $FreeBSD: graphics/kipi-plugin-shwup/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

LIB_DEPENDS=	qca:${PORTSDIR}/devel/qca

KIPI_PLUGIN=	shwup
NO_STAGE=	yes
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>

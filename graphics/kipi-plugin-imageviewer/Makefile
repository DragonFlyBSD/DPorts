# $FreeBSD: graphics/kipi-plugin-imageviewer/Makefile 315762 2013-04-08 17:10:56Z makc $

PORTNAME=	kipi-plugin-${KIPI_PLUGIN}
PORTVERSION=	${DIGIKAM_VER}
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

USE_GL=		glu
USE_XORG=	xrandr

KIPI_PLUGIN=	imageviewer
.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>

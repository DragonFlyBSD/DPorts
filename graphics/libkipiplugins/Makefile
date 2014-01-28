# $FreeBSD: graphics/libkipiplugins/Makefile 340628 2014-01-21 18:17:23Z makc $

PORTNAME=	libkipiplugins
PORTVERSION=	${DIGIKAM_VER}
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${KIPI_PLUGIN}_DESC}

KIPI_PLUGIN=	libkipiplugins
.include "${.CURDIR}/../digikam-kde4/Makefile.common"

USE_KDE4+=	libkdcraw libkexiv2 libkipi
USE_LDCONFIG=	yes

.include <bsd.port.mk>

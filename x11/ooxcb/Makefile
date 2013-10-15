# Created by: gahr
# $FreeBSD: x11/ooxcb/Makefile 327777 2013-09-20 23:43:19Z bapt $

PORTNAME=	ooxcb
PORTVERSION=	1.1
CATEGORIES=	x11
MASTER_SITES=	http://samurai-x.org/downloads/

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	Python binding to the X server using xcb

USE_PYTHON=	yes
USE_XORG=	xcb
USE_PYDISTUTILS=easy_install
PLIST_FILES=	${PYTHON_SITELIBDIR:S/${LOCALBASE}\///}/${PORTNAME}-${PORTVERSION}-py${PYTHON_VER}.egg

NO_STAGE=	yes
.include <bsd.port.mk>

# Created by: gahr
# $FreeBSD: x11/ooxcb/Makefile 319055 2013-05-25 14:37:02Z zeising $

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

.include <bsd.port.mk>

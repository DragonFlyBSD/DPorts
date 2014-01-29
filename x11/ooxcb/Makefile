# Created by: gahr
# $FreeBSD: x11/ooxcb/Makefile 340722 2014-01-22 17:00:46Z mat $

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

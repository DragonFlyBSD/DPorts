# Created by: demon@FreeBSD.org
# $FreeBSD: math/glm/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	glm
PORTVERSION=	0.9.5.0
CATEGORIES=	math graphics
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE}
MASTER_SITE_SUBDIR=	ogl-math/${PORTNAME}-${PORTVERSION}

MAINTAINER=	demon@FreeBSD.org
COMMENT=	C++ mathematics library for software based on the OpenGL GLSL

USE_ZIP=	yes
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}

do-install:
		cd ${WRKSRC} && ${FIND} glm -print -depth | ${CPIO} -pdm ${STAGEDIR}${PREFIX}/include/

.include <bsd.port.mk>

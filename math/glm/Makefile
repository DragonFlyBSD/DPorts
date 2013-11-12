# Created by: demon@FreeBSD.org
# $FreeBSD: math/glm/Makefile 332826 2013-11-05 10:05:23Z demon $

PORTNAME=	glm
PORTVERSION=	0.9.4.6
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

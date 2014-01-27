# Created by: Alex Pesternikov <apesternikov@page2rss.com>
# $FreeBSD: devel/py-cog/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	cog
PORTVERSION=	2.3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}app-${PORTVERSION}

MAINTAINER=	apesternikov@page2rss.com
COMMENT=	Code Generator for any language

LICENSE=	MIT

# Python3 ready
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_EGGINFO=	${PORTNAME}app-${PORTVERSION}-py${PYTHON_VER}.egg-info

NO_STAGE=	yes
.include <bsd.port.mk>

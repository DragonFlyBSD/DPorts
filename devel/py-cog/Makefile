# New ports collection makefile for:   cog
# Date created:        30 March 2007
# Whom:                Alex Pesternikov <apesternikov@page2rss.com>
#
# $FreeBSD: ports/devel/py-cog/Makefile,v 1.6 2012/11/17 05:56:45 svnexp Exp $
#

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

.include <bsd.port.mk>

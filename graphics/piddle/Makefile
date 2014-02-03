# Created by: dom@happygiraffe.net
# $FreeBSD: graphics/piddle/Makefile 341885 2014-01-30 20:57:05Z antoine $

PORTNAME=	piddle
PORTVERSION=	1.0.15
PORTEPOCH=	1
CATEGORIES=	graphics python
MASTER_SITES=	SF
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Graphical Drawing library for Python

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

post-install:
	cd ${WRKSRC}/docs && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>

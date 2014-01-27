# Created by: ijliao
# $FreeBSD: devel/py-log4py/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	log4py
PORTVERSION=	1.3
CATEGORIES=	devel python
MASTER_SITES=	SF
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	xride@FreeBSD.org
COMMENT=	A python logging module

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
NO_STAGE=	yes

.if !defined(NOPORTDOCS)
post-install:
	@${MKDIR} ${DOCSDIR}
	${CP} -R ${WRKSRC}/doc/* ${DOCSDIR}
.endif

.include <bsd.port.mk>

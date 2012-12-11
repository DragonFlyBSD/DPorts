# ex:ts=8
# Ports collection makefile for:	py-log4py
# Date created:			Mar 14, 2002
# Whom:				ijliao
#
# $FreeBSD: ports/devel/py-log4py/Makefile,v 1.9 2012/11/17 05:56:48 svnexp Exp $
#

PORTNAME=	log4py
PORTVERSION=	1.3
CATEGORIES=	devel python
MASTER_SITES=	SF
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	xride@FreeBSD.org
COMMENT=	A python logging module

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

.if !defined(NOPORTDOCS)
post-install:
	@${MKDIR} ${DOCSDIR}
	${CP} -R ${WRKSRC}/doc/* ${DOCSDIR}
.endif

.include <bsd.port.mk>

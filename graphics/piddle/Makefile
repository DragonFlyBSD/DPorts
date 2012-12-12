# Ports collection makefile for:	piddle
# Date created:				29 Feb 2000
# Whom:					dom@happygiraffe.net
#
# $FreeBSD: ports/graphics/piddle/Makefile,v 1.15 2012/11/17 05:58:19 svnexp Exp $
#

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

.if !defined(NOPORTDOCS)
PORTDOCS=	*
.endif

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	(cd ${WRKSRC}/docs ; tar cf - *) | (cd ${DOCSDIR} ; tar xf -)
.endif

.include <bsd.port.mk>

# New ports collection makefile for:	py-babel
# Date created:		7 July 2007
# Whom:			Dryice Liu	<dryice@dryice.name>
#
# $FreeBSD: ports/devel/py-babel/Makefile,v 1.12 2012/11/17 05:56:45 svnexp Exp $
#

PORTNAME=	Babel
PORTVERSION=	0.9.6
CATEGORIES=	devel python
MASTER_SITES=	http://ftp.edgewall.com/pub/babel/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	A collection of tools for internationalizing Python applications

USE_PYTHON=		2.5-2.7
USE_PYDISTUTILS=	easy_install

.if !defined(NOPORTDOCS)
PORTDOCS=	doc/*
.endif

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
.for docfile in ${PORTDOCS}
	${CP} -r ${WRKSRC}/${docfile} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>

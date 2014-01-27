# Created by: ijliao
# $FreeBSD: devel/py-spark/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	spark
PORTVERSION=	0.6.1
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	http://pages.cpsc.ucalgary.ca/~aycock/spark/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Scanning, Parsing, and Rewriting Kit

USE_PYTHON=	2
NO_BUILD=	yes

OPTIONS_DEFINE=	DOCS

do-install:
	@${MKDIR} ${STAGEDIR}${PYTHON_SITELIBDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/spark.py ${STAGEDIR}${PYTHON_SITELIBDIR}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for file in doc.html doc.tex paper.ps.gz
	${INSTALL_DATA} ${WRKSRC}/doc/${file} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>

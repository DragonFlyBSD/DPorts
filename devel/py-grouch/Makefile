# Created by: Johann Visagie <wjv@FreeBSD.org>
# $FreeBSD: devel/py-grouch/Makefile 337685 2013-12-27 10:13:43Z wg $

PORTNAME=	grouch
PORTVERSION=	0.4
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	https://www.mems-exchange.org/software/files/${PORTNAME}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Grouch-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	System for describing and enforcing a Python object schema

USE_PYTHON=	2
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

PORTDOCS=	*
PORTEXAMPLES=	*

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for docfile in CHANGES README
	${INSTALL_DATA} ${WRKSRC}/${docfile}.txt ${STAGEDIR}${DOCSDIR}
.endfor
	${INSTALL_DATA} ${WRKSRC}/doc/* ${STAGEDIR}${DOCSDIR}
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/examples/* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>

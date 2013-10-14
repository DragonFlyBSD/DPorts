# Created by: Kevin Golding <ports@caomhin.org>
# $FreeBSD: print/py-trml2pdf/Makefile 327765 2013-09-20 22:43:59Z bapt $

PORTNAME=	trml2pdf
PORTVERSION=	1.2
PORTREVISION=	1
CATEGORIES=	print python
MASTER_SITES=	SF/kraft/${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	Tiny RML2PDF easily creates PDF documents.

RUN_DEPENDS=	${LOCALBASE}/bin/pildriver.py:${PORTSDIR}/graphics/py-imaging \
		${PYTHON_SITELIBDIR}/reportlab/__init__.py:${PORTSDIR}/print/py-reportlab

NO_BUILD=	yes

USE_BZIP2=	yes
USE_PYTHON=	yes

DOCSDIR=	${PREFIX}/share/doc/py-${PORTNAME}
EXAMPLESDIR=	${PREFIX}/share/examples/py-${PORTNAME}

NO_STAGE=	yes
do-install:
	@${MKDIR} ${PYTHON_SITELIBDIR}/trml2pdf
	@${INSTALL_SCRIPT} ${WRKSRC}/trml2pdf/* ${PYTHON_SITELIBDIR}/trml2pdf

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.txt ${DOCSDIR}
.endif

.if !defined(NOPORTEXAMPLES)
	@${MKDIR} ${EXAMPLESDIR}
	${CP} -R ${WRKSRC}/rmls/ ${EXAMPLESDIR}/rmls
.endif

.include <bsd.port.mk>

# Created by: Johann Visagie <wjv@FreeBSD.org>
# $FreeBSD: ports/textproc/py-dsv/Makefile,v 1.13 2013/01/22 21:45:40 svnexp Exp $

PORTNAME=	dsv
PORTVERSION=	1.4.1
CATEGORIES=	textproc python
MASTER_SITES=	SF/python-${PORTNAME}/python-${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:tu}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python module to parse or write delimeter-separated (e.g. CSV) files

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	DSV
DSV_BASEDIR=	${PYTHONPREFIX_SITELIBDIR}/DSV

.include <bsd.port.options.mk>

post-install:
	@${PRINTF} '#!/bin/sh\n${PYTHON_CMD} ${DSV_BASEDIR}/DSV.py "$$@"\n' \
	  >${WRKDIR}/DSV.sh
	@${INSTALL_SCRIPT} ${WRKDIR}/DSV.sh ${PREFIX}/bin/DSV
.if ${PORT_OPTIONS:MDOCS}
	@ ${MKDIR} ${DOCSDIR}
	@ ${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>

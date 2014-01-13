# Created by: Hye-Shik Chang
# $FreeBSD: devel/py-plex/Makefile 337705 2013-12-27 10:51:57Z wg $

PORTNAME=	plex
PORTVERSION=	1.1.5
CATEGORIES=	devel python
MASTER_SITES=	http://www.cosc.canterbury.ac.nz/greg.ewing/python/Plex/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Plex-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Lexical Analysis Module for Python

USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_AUTOPLIST=	yes

NO_WRKSUBDIR=	yes
DOCSDIR=	${PREFIX}/share/doc/${PKGNAMEPREFIX}${PORTNAME}
EXAMPLESDIR=	${PREFIX}/share/examples/${PKGNAMEPREFIX}${PORTNAME}

PORTDOCS=	*
PORTEXAMPLES=	*

post-extract:
	${SED} -e 's|%%PORTVERSION%%|${PORTVERSION}|g' ${FILESDIR}/setup.py \
		> ${WRKSRC}/setup.py

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC}/doc && ${INSTALL_DATA} ./* ${STAGEDIR}${DOCSDIR}
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	cd ${WRKSRC}/examples && ${INSTALL_DATA} ./* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>

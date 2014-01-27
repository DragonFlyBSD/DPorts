# Created by: Choe, Cheng-Dae
# $FreeBSD: textproc/py-xlwriter/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	xlwriter
PORTVERSION=	0.4a3
CATEGORIES=	textproc python
MASTER_SITES=	SF/py${PORTNAME}/py${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pyXLWriter-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python library for generating Excel-compatible spreadsheets

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
USE_ZIP=	yes
PYDISTUTILS_AUTOPLIST=	yes

PORTEXAMPLES=	*

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${FIND} ${WRKSRC}/examples -type f -exec ${INSTALL_DATA} {} ${STAGEDIR}${EXAMPLESDIR} \;

.include <bsd.port.mk>

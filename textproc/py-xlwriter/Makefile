# Created by: Choe, Cheng-Dae
# $FreeBSD: textproc/py-xlwriter/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	xlwriter
PORTVERSION=	0.4a3
CATEGORIES=	textproc python
MASTER_SITES=	SF/py${PORTNAME}/py${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pyXLWriter-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A python library for generating Excel-compatible spreadsheets

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
USE_ZIP=	yes
PYDISTUTILS_PKGNAME=	pyXLWriter

NO_STAGE=	yes
post-install:
	${MKDIR} ${EXAMPLESDIR}
	${FIND} ${WRKSRC}/examples -type f -exec ${INSTALL_DATA} {} ${EXAMPLESDIR} \;

.include <bsd.port.mk>

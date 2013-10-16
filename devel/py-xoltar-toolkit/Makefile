# Created by: nectar@FreeBSD.org
# $FreeBSD: devel/py-xoltar-toolkit/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	xoltar-toolkit
PORTVERSION=	2001.06.01
CATEGORIES=	devel python
MASTER_SITES=	SF/${PORTNAME}/xoltar%20toolkit/June%202001
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}-01jun01

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Functional programming, lazy expressions, and thread pools for Python

USE_PYTHON=	yes
NO_WRKSUBDIR=	yes

NO_STAGE=	yes
do-build:
	@ ${PYTHON_CMD} ${PYTHON_LIBDIR}/compileall.py ${WRKSRC}
	@ ${PYTHON_CMD} -O ${PYTHON_LIBDIR}/compileall.py ${WRKSRC}

do-install:
	@ ${INSTALL_DATA} ${WRKSRC}/*.py* ${PYTHON_SITELIBDIR}

post-install:
.if !defined(NOPORTDOCS)
	@ ${MKDIR} ${DOCSDIR}
	@ ${INSTALL_DATA} ${WRKSRC}/*.txt ${DOCSDIR}
.endif

.include <bsd.port.mk>

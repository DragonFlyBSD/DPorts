# Created by: wen@FreeBSD.org
# $FreeBSD: head/textproc/py-MarkupSafe/Makefile 453358 2017-11-02 19:00:55Z sunpoet $

PORTNAME=	MarkupSafe
PORTVERSION=	1.0
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Implements XML/HTML/XHTML Markup safe string for Python

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_PYTHON=	autoplist concurrent distutils
USES=		python

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/markupsafe/_speedups.so

.include <bsd.port.mk>

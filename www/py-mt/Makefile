# Created by: ijliao
# $FreeBSD: www/py-mt/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	mt
PORTVERSION=	1.0
CATEGORIES=	www python
MASTER_SITES=	SF/py${PORTNAME}/py${PORTNAME}/PyMT-${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	PyMT-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A Python module which provides Movable Type XML-RPC connectivity

USE_PYTHON=	-2.7
NO_BUILD=	yes
PLIST_FILES=	%%PYTHON_SITELIBDIR%%/PyMT.py

NO_STAGE=	yes
do-install:
	@${INSTALL_DATA} ${WRKSRC}/PyMT.py ${PYTHON_SITELIBDIR}

.include <bsd.port.mk>

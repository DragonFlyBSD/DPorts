# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: math/py-munkres/Makefile 323891 2013-07-29 15:03:58Z feld $

PORTNAME=	munkres
PORTVERSION=	1.0.5.4
PORTREVISION=	2
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	feld@FreeBSD.org
COMMENT=	A Python implementation of the munkres algorithm

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/munkres.py \
		%%PYTHON_SITELIBDIR%%/munkres.pyc \
		%%PYTHON_SITELIBDIR%%/munkres.pyo

.include <bsd.port.mk>

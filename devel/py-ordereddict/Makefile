# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: devel/py-ordereddict/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	ordereddict
PORTVERSION=	1.1
CATEGORIES=	devel
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	A drop-in substitute for Py2.7's new collections

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_PYTHON=	2.4-2.7 # for graphics/py-blockdiag
USE_PYDISTUTILS=	yes

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/ordereddict.py \
		%%PYTHON_SITELIBDIR%%/ordereddict.pyc \
		%%PYTHON_SITELIBDIR%%/ordereddict.pyo

NO_STAGE=	yes
.include <bsd.port.mk>

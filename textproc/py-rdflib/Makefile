# Created by: ijliao
# $FreeBSD: textproc/py-rdflib/Makefile 326681 2013-09-07 19:14:23Z sunpoet $

PORTNAME=	rdflib
PORTVERSION=	4.0.1
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Python library for RDF manipulation

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}isodate>=0:${PORTSDIR}/devel/py-isodate

USE_PYTHON=	-2.7
USE_PYDISTUTILS=yes

post-patch:
	@${REINPLACE_CMD} -e 's|setuptools|distutils.core|' ${WRKSRC}/${PYSETUP}

.include <bsd.port.mk>

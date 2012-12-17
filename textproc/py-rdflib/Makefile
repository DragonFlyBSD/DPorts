# Created by: ijliao
# $FreeBSD: ports/textproc/py-rdflib/Makefile,v 1.25 2012/11/17 06:02:18 svnexp Exp $

PORTNAME=	rdflib
PORTVERSION=	3.2.3
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	A Python library for RDF manipulation

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}isodate>=0:${PORTSDIR}/devel/py-isodate

USE_PYTHON=		-2.7
USE_PYDISTUTILS=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|setuptools|distutils.core|' ${WRKSRC}/${PYSETUP}

.include <bsd.port.mk>

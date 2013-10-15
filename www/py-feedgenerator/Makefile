# Created by: Julien Laffaye <jlaffaye@FreeBSD.org>
# $FreeBSD: www/py-feedgenerator/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	feedgenerator
PORTVERSION=	1.5
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jlaffaye@FreeBSD.org
COMMENT=	Standalone version of django.utils.feedgenerator

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytz>0:${PORTSDIR}/devel/py-pytz \
		${PYTHON_PKGNAMEPREFIX}six>0:${PORTSDIR}/devel/py-six

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install

regression-test: build
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYSETUP} test

NO_STAGE=	yes
.include <bsd.port.mk>

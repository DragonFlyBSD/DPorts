# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: net/py-beanstalkc/Makefile 342119 2014-02-01 11:38:17Z koobs $

PORTNAME=	beanstalkc
PORTVERSION=	0.3.0
PORTREVISION=	1
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Simple beanstalkd client library for Python

LICENSE=	APACHE20

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

OPTIONS_DEFINE=		YAML
OPTIONS_DEFAULT=	YAML
YAML_DESC=		Support parsing YAML responses

YAML_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}yaml>0:${PORTSDIR}/devel/py-yaml

.include <bsd.port.mk>

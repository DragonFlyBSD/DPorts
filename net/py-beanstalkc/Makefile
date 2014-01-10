# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: net/py-beanstalkc/Makefile 338168 2013-12-30 20:55:18Z ohauer $

PORTNAME=	beanstalkc
PORTVERSION=	0.3.0
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	A simple beanstalkd client library for Python

LICENSE=	APACHE20

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

OPTIONS_DEFINE=	YAML
OPTIONS_DEFAULT=	YAML
YAML_DESC=	Support parsing YAML responses

# bypass infrastructure bug
OPTIONSFILE=	${PORT_DBDIR}/py-${PORTNAME}/options

NO_STAGE=	yes
.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MYAML}
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}yaml>0:${PORTSDIR}/devel/py-yaml
.endif

.include <bsd.port.mk>

# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: net/py-beanstalkc/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	beanstalkc
PORTVERSION=	0.3.0
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	A simple beanstalkd client library for Python

LICENSE=	AL2

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

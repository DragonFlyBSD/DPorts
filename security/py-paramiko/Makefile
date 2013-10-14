# Created by: Ulf Lilleengen
# $FreeBSD: security/py-paramiko/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	paramiko
PORTVERSION=	1.11.0
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sbz@FreeBSD.org
COMMENT=	Python SSH2 protocol library

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pycrypto>0:${PORTSDIR}/security/py-pycrypto

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

EXAMPLESDIR=	${PREFIX}/share/examples/py-${PORTNAME}

NO_STAGE=	yes
.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MEXAMPLES}
	@${MKDIR} ${EXAMPLESDIR}
	@(cd ${WRKSRC}/demos && ${COPYTREE_SHARE} \* ${EXAMPLESDIR})
.endif

regression-test: extract
	@(cd ${WRKSRC} && ${PYTHON_CMD} test.py)

.include <bsd.port.mk>

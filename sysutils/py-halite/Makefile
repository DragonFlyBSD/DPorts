# Created by: Christer Edwards <christer.edwards@gmail.com>
# $FreeBSD: sysutils/py-halite/Makefile 342247 2014-02-02 07:46:00Z koobs $

PORTNAME=	halite
PORTVERSION=	0.1.15
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	christer.edwards@gmail.com
COMMENT=	SaltStack Web UI

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}salt>=0.17.0:${PORTSDIR}/sysutils/py-salt \
		${PYTHON_PKGNAMEPREFIX}cherrypy>0:${PORTSDIR}/www/py-cherrypy

USE_PYTHON=		2
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>

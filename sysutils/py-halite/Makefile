# Created by: Christer Edwards <christer.edwards@gmail.com>
# $FreeBSD: sysutils/py-halite/Makefile 339634 2014-01-13 21:00:02Z rene $

PORTNAME=	halite
PORTVERSION=	0.1.09
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	christer.edwards@gmail.com
COMMENT=	SaltStack Web UI

LICENSE=	APACHE20

USE_PYTHON=	2
USE_PYDISTUTILS=easy_install
PYDISTUTILS_AUTOPLIST=yes

BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}salt>=0.17.0:${PORTSDIR}/sysutils/py-salt \
		${PYTHON_PKGNAMEPREFIX}cherrypy>0:${PORTSDIR}/www/py-cherrypy

RUN_DEPENDS:=	${BUILD_DEPENDS}

post-patch:
	@${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|' ${WRKSRC}/setup.py

.include <bsd.port.mk>

# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: ports/net/py-port-for/Makefile,v 1.3 2013/02/09 15:59:33 svnexp Exp $

PORTNAME=	port-for
PORTVERSION=	0.3
CATEGORIES=	net devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Python utility and library that helps with TCP ports management

LICENSE=	MIT

# Python3 Ready
USE_PYTHON=	2.5+
USE_PYDISTUTILS=	yes

post-patch:
	@${REINPLACE_CMD} '/DEFAULT_CONFIG_PATH/ s|/etc|${PREFIX}&|' ${WRKSRC}/port_for/store.py

.include <bsd.port.mk>

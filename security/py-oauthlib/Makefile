# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: ports/security/py-oauthlib/Makefile,v 1.6 2013/02/09 15:59:41 svnexp Exp $

PORTNAME=	oauthlib
PORTVERSION=	0.3.0
CATEGORIES=	security net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	An RFC-compliant Python implementation of OAuth

LICENSE=	BSD

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pycrypto>0:${PORTSDIR}/security/py-pycrypto
RUN_DEPENDS:=	${BUILD_DEPENDS}

# Python3 ready
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>

# Created by: Wen Heping
# $FreeBSD: www/py-WebTest/Makefile 342056 2014-01-31 19:47:28Z cs $

PORTNAME=	WebTest
PORTVERSION=	2.0.14
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Helper to test WSGI applications

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:${PORTSDIR}/devel/py-six \
		${PYTHON_PKGNAMEPREFIX}beautifulsoup>=4:${PORTSDIR}/www/py-beautifulsoup \
		${PYTHON_PKGNAMEPREFIX}waitress>0:${PORTSDIR}/www/py-waitress \
		${PYTHON_PKGNAMEPREFIX}webob>=1.2:${PORTSDIR}/www/py-webob
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:${PORTSDIR}/devel/py-six \
		${PYTHON_PKGNAMEPREFIX}beautifulsoup>=4:${PORTSDIR}/www/py-beautifulsoup \
		${PYTHON_PKGNAMEPREFIX}waitress>0:${PORTSDIR}/www/py-waitress \
		${PYTHON_PKGNAMEPREFIX}webob>=1.2:${PORTSDIR}/www/py-webob

USE_ZIP=		yes
USE_PYTHON=		yes
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>

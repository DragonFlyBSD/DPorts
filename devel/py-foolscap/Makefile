# Created by: Kevin Lo <kevlo@FreeBSD.org>
# $FreeBSD: devel/py-foolscap/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	foolscap
PORTVERSION=	0.6.4
CATEGORIES=	devel python
MASTER_SITES=	http://foolscap.lothar.com/releases/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kevlo@FreeBSD.org
COMMENT=	RPC protocol for Twisted Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/twisted:${PORTSDIR}/devel/py-twistedCore \
		${PYTHON_PKGNAMEPREFIX}openssl>=0.13:${PORTSDIR}/security/py-openssl
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.mk>

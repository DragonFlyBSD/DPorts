# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: ports/www/py-openssl-proxy/Makefile,v 1.9 2013/01/21 08:50:29 svnexp Exp $

PORTNAME=	openssl-proxy
PORTVERSION=	0.1
CATEGORIES=	www security python
MASTER_SITES=	CENKES
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pyOpenSSLProxy-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	HTTPS proxy support

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}openssl>0:${PORTSDIR}/security/py-openssl

USE_PYTHON=	-2.7
USE_PYDISTUTILS=yes
PYDISTUTILS_PKGNAME=	pyOpenSSLProxy

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/OpenSSLProxy.py \
		%%PYTHON_SITELIBDIR%%/OpenSSLProxy.pyc \
		%%PYTHON_SITELIBDIR%%/OpenSSLProxy.pyo

.include <bsd.port.mk>

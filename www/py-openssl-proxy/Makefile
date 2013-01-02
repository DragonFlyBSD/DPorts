# New ports collection makefile for:	py-openssl-proxy
# Date created:		23 July 2006
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/www/py-openssl-proxy/Makefile,v 1.8 2012/11/17 06:03:00 svnexp Exp $
#

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

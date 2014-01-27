# Created by: Olivier Duchateau
# $FreeBSD: net/py-ndg_httpsclient/Makefile 340894 2014-01-24 13:34:31Z olivierd $

PORTNAME=	ndg_httpsclient
PORTVERSION=	0.3.2
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
MASTER_SITE_SUBDIR=	source/${DISTNAME:C/(.).*/\1/}/${PORTNAME:S/_/-/}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	olivierd@FreeBSD.org
COMMENT=	Enhance HTTPS support for httplib and urllib2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}openssl>=0.13:${PORTSDIR}/security/py-openssl \
	${PYTHON_PKGNAMEPREFIX}asn1>=0.1.4:${PORTSDIR}/devel/py-asn1

USE_PYTHON=	2
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>

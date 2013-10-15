# Created by: ijliao
# $FreeBSD: net/py-twitter/Makefile 329887 2013-10-09 12:24:19Z sunpoet $

PORTNAME=	twitter
PORTVERSION=	1.1
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-${PORTNAME}-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Python wrapper around the Twitter API

LICENSE=	AL2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}httplib2>=0:${PORTSDIR}/www/py-httplib2 \
		${PYTHON_PKGNAMEPREFIX}oauth2>=0:${PORTSDIR}/net/py-oauth2 \
		${PYTHON_PKGNAMEPREFIX}simplejson>=0:${PORTSDIR}/devel/py-simplejson

NO_STAGE=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install
PYDISTUTILS_PKGNAME=	python_twitter

.include <bsd.port.mk>

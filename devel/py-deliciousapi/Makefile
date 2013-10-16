# Created by: Sofian Brabez <sbrabez@gmail.com>
# $FreeBSD: devel/py-deliciousapi/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	deliciousapi
PORTVERSION=	1.6.7
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	DeliciousAPI-${PORTVERSION}

MAINTAINER=	sbz@FreeBSD.org
COMMENT=	Unofficial Python API for retrieving data from Delicious.com

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/BeautifulSoup.py:${PORTSDIR}/www/py-beautifulsoup32 \
		${PYTHON_PKGNAMEPREFIX}simplejson>=1.7:${PORTSDIR}/devel/py-simplejson

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	DeliciousAPI

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/${PORTNAME}.py \
		%%PYTHON_SITELIBDIR%%/${PORTNAME}.pyc \
		%%PYTHON_SITELIBDIR%%/${PORTNAME}.pyo

NO_STAGE=	yes
.include <bsd.port.mk>

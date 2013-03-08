# Created by: Kubilay Kocak <koobs@FreeBSD.org>
#
# $FreeBSD: ports/devel/py-reddit/Makefile,v 1.3 2013/02/09 15:59:06 svnexp Exp $
#

PORTNAME=	reddit
PORTVERSION=	1.4.0
CATEGORIES=	devel python www
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	A Python wrapper for the Reddit API

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/six.py:${PORTSDIR}/devel/py-six

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>

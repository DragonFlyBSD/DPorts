# New ports collection makefile for:	py-reddit
# Date created:		2012-06-25
# Whom:			koobs <koobs.freebsd@gmail.com>
#
# $FreeBSD: ports/devel/py-reddit/Makefile,v 1.2 2012/11/17 05:56:50 svnexp Exp $
#

PORTNAME=	reddit
PORTVERSION=	1.4.0
CATEGORIES=	devel python www
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs.freebsd@gmail.com
COMMENT=	A Python wrapper for the Reddit API

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/six.py:${PORTSDIR}/devel/py-six

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>

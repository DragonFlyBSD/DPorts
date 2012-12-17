# New ports collection makefile for:	py-unittest2
# Date created:				Nov 08, 2011
# Whom:					Ruslan Mahmatkhanov <cvs-src@yandex.ru>
#
# $FreeBSD: ports/devel/py-unittest2/Makefile,v 1.3 2012/11/17 05:56:51 svnexp Exp $
#

PORTNAME=	unittest2
PORTVERSION=	0.5.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Unittest features for Python 2.7 backported to Python 2.3+

LICENSE=	BSD

PLIST_SUB+=	PYTHON_VER=${PYTHON_VER}
USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install
USE_ZIP=	yes

.include <bsd.port.mk>

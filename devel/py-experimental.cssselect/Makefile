# New ports collection makefile for:	py-experimental.cssselect
# Date created:				03 January 2012
# Whom:					Ruslan Mahmatkhanov <cvs-src@yandex.ru>
#
# $FreeBSD: ports/devel/py-experimental.cssselect/Makefile,v 1.3 2012/11/17 05:56:46 svnexp Exp $
#

PORTNAME=	experimental.cssselect
PORTVERSION=	0.3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Experimental version of lxml.cssselect

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}lxml>=0:${PORTSDIR}/devel/py-lxml

# Python3 ready
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
USE_ZIP=	yes

.include <bsd.port.mk>

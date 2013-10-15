# $FreeBSD: devel/py-experimental.cssselect/Makefile 327992 2013-09-23 12:52:16Z rm $

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
USE_PYDISTUTILS=easy_install
USE_ZIP=	yes

NO_STAGE=	yes

.include <bsd.port.mk>

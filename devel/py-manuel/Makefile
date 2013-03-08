# $FreeBSD: ports/devel/py-manuel/Makefile,v 1.5 2013/02/12 19:19:46 svnexp Exp $

PORTNAME=	manuel
PORTVERSION=	1.6.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Lets you build tested documentation

LICENSE=	ZPL21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=0:${PORTSDIR}/devel/py-six

# Python3 ready
USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>

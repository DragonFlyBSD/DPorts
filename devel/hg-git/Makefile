# Created by: Marco Broeder <marco.broeder@gmx.eu>
# $FreeBSD: devel/hg-git/Makefile 337220 2013-12-22 21:21:24Z antoine $

PORTNAME=	hg-git
PORTVERSION=	0.5.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	marco.broeder@gmx.eu
COMMENT=	Mercurial extension to pull from or push to a Git repository

LICENSE=	GPLv2

RUN_DEPENDS=	${PKGNAMEPREFIX}dulwich>=*:${PORTSDIR}/devel/dulwich \
		mercurial>=*:${PORTSDIR}/devel/mercurial \
		${PKGNAMEPREFIX}ordereddict>=1.1:${PORTSDIR}/devel/py-ordereddict

USE_PYTHON=	2
USE_PYDISTUTILS=yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>

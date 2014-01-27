# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/py-gitdb/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	gitdb
PORTVERSION=	0.5.4
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Pure Python git object database

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}async>=0.6.1:${PORTSDIR}/devel/py-async \
		${PYTHON_PKGNAMEPREFIX}smmap>=0.8.0:${PORTSDIR}/devel/py-smmap

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes

NO_STAGE=	yes
.include <bsd.port.mk>

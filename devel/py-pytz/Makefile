# Created by: Khairil Yusof <kaeru@inigo-tech.com>
# $FreeBSD: devel/py-pytz/Makefile 341414 2014-01-27 15:32:29Z lwhsu $

PORTNAME=	pytz
PORTVERSION=	2013.9
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	World Timezone Definitions for Python

LICENSE=	MIT

USE_BZIP2=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|=True|=False|' ${WRKSRC}/setup.py

.include <bsd.port.mk>

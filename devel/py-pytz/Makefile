# Created by: Khairil Yusof <kaeru@inigo-tech.com>
# $FreeBSD: devel/py-pytz/Makefile 338651 2014-01-04 16:01:18Z lwhsu $

PORTNAME=	pytz
PORTVERSION=	2013.9
PORTEPOCH=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	World Timezone Definitions for Python

LICENSE=	MIT

USE_BZIP2=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYTHON_PY3K_PLIST_HACK=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|=True|=False|' ${WRKSRC}/setup.py

.include <bsd.port.mk>

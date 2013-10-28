# Created by: Johannes Meixner <xmj@chaot.net>
# $FreeBSD: devel/py-xmltodict/Makefile 331505 2013-10-24 17:41:11Z olivierd $

PORTNAME=	xmltodict
PORTVERSION=	0.8.3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	xmj@chaot.net
COMMENT=	XML parser that returns python dictionaries

LICENSE=	MIT

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_AUTOPLIST=	yes
PYTHON_PY3K_PLIST_HACK=	yes

# setuptools module doesn't support STAGEDIR
NO_STAGE=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|setup_|#setup_|' ${WRKSRC}/setup.py

.include <bsd.port.mk>

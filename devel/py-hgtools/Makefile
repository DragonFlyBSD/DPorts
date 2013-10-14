# Created by: William Grzybowski
# $FreeBSD: devel/py-hgtools/Makefile 328039 2013-09-23 20:09:24Z wg $

PORTNAME=	hgtools
PORTVERSION=	4.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Classes and setuptools plugin for Mercurial repositories

LICENSE=	GPLv2

USE_ZIP=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes

post-patch:
	@${REINPLACE_CMD} 's/license="GPL2",/license="GPL2", zip_safe=False,/' \
		${WRKSRC}/setup.py

.include <bsd.port.mk>

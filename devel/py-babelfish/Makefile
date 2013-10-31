# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: devel/py-babelfish/Makefile 332224 2013-10-31 11:20:21Z wg $

PORTNAME=	babelfish
PORTVERSION=	0.2.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Module to work with countries and languages

LICENSE=	BSD

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_AUTOPLIST=	yes

NO_STAGE=	yes

post-patch:
	@${REINPLACE_CMD} "s/.com',/.com', zip_safe=False,/" \
		${WRKSRC}/setup.py

.include <bsd.port.mk>

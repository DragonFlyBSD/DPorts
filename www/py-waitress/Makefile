# Created by: Olivier Duchateau
# $FreeBSD: www/py-waitress/Makefile 335384 2013-12-01 14:10:59Z olivierd $

PORTNAME=	waitress
PORTVERSION=	0.8.8
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	olivierd@FreeBSD.org
COMMENT=	Python WSGI server

LICENSE=	ZPL21

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_AUTOPLIST=	yes

pre-patch:
	@${CP} ${FILESDIR}/MANIFEST.in ${WRKSRC}

.include <bsd.port.mk>

# Created by: Trevor Caira <trevor@bitba.se>
# $FreeBSD: devel/py-resolver/Makefile 327015 2013-09-11 22:16:38Z wg $

PORTNAME=	resolver
PORTVERSION=	0.2.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	trevor@bitba.se
COMMENT=	Resolve specially formatted statements to Python objects

LICENSE=	LGPL21

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

post-patch:
	@${REINPLACE_CMD} 's/license="LGPL",/license="LGPL", zip_safe=False,/' \
		${WRKSRC}/setup.py

.include <bsd.port.mk>

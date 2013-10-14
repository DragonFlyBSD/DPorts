# Created by: Trevor Caira <trevor@bitba.se>
# $FreeBSD: devel/py-resolver/Makefile 327724 2013-09-20 17:13:42Z bapt $

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

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} 's/license="LGPL",/license="LGPL", zip_safe=False,/' \
		${WRKSRC}/setup.py

.include <bsd.port.mk>

# Created by: Peter Schuller <peter.schuller@infidyne.com>
# $FreeBSD: devel/py-boto/Makefile 327740 2013-09-20 19:50:33Z rm $

PORTNAME=	boto
PORTVERSION=	2.13.3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Python interface to Amazon Web Services

LICENSE=	MIT

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install

CONFLICTS=	p5-Net-Amazon-Route53-[0-9]*
NO_STAGE=	yes

.include <bsd.port.mk>

# $FreeBSD: security/py-potr/Makefile 330492 2013-10-16 10:17:49Z rm $

PORTNAME=	potr
PORTVERSION=	1.0.0
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-${PORTNAME}-${PORTVERSION}

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Pure Python Off-The-Record encryption

LICENSE=	LGPL3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pycrypto>0:${PORTSDIR}/security/py-pycrypto

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	python_${PORTNAME}

NO_STAGE=	yes

.include <bsd.port.mk>

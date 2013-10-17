# Created by: Carlo Strub
# $FreeBSD: security/py-stem/Makefile 330355 2013-10-14 20:20:41Z cs $

PORTNAME=	stem
PORTVERSION=	1.1.0
CATEGORIES=	security net python
MASTER_SITES=	http://www.c-s.li/ports/ \
		CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Python controller library for Tor

LICENSE=	LGPL3

RUN_DEPENDS=	tor:${PORTSDIR}/security/tor

USE_BZIP2=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=yes

.include <bsd.port.mk>

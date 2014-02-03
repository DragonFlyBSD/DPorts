# Created by: rokaz
# $FreeBSD: security/belier/Makefile 342016 2014-01-31 16:25:29Z miwi $

PORTNAME=	belier
PORTVERSION=	1.2
PORTREVISION=	1
CATEGORIES=	security net
MASTER_SITES=	http://www.ohmytux.com/belier/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	romain.garbage@gmail.com
COMMENT=	easily cross several machines with ssh

RUN_DEPENDS=	expect>=5.42.1:${PORTSDIR}/lang/expect

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>

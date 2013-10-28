# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: databases/py-pylibmc/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	pylibmc
PORTVERSION=	1.2.3
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gslin@gslin.org
COMMENT=	Python libmemcached wrapper

LICENSE=	BSD

LIB_DEPENDS=	memcached:${PORTSDIR}/databases/libmemcached

MAKE_ENV+=	LIBMEMCACHED="${LOCALBASE}"
USE_PYTHON=	2.5+
USE_PYDISTUTILS=	yes

NO_STAGE=	yes
.include <bsd.port.mk>

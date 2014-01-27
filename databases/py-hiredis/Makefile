# Created by: Denis Generalov <gd@rambler-co.ru>
# $FreeBSD: databases/py-hiredis/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	hiredis
PORTVERSION=	0.1.2
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gd.workbox@gmail.com
COMMENT=	Python extension that wraps hiredis

LICENSE=	BSD

LIB_DEPENDS=	libhiredis.so:${PORTSDIR}/databases/hiredis

USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_AUTOPLIST=yes

post-patch:
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|' ${WRKSRC}/${PYSETUP}

.include <bsd.port.mk>

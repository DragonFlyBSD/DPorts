# New ports collection makefile for:	py-riak
# Date created:				2010-12-10
# Whom:					TJ Ninneman <tj@harperdog.com>
#
# $FreeBSD: ports/databases/py-riak/Makefile,v 1.3 2012/11/17 05:55:22 svnexp Exp $
#

PORTNAME=	riak
PORTVERSION=	1.4.1
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	tj@harperdog.com
COMMENT=	Python API for Riak, a Dynamo-inspired key/value store

LICENSE=	AL2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}protobuf>=2.4.0:${PORTSDIR}/devel/py-protobuf

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

post-patch:
	@${REINPLACE_CMD} -e 's|zip_safe=True|zip_safe=False|' ${WRKSRC}/${PYSETUP}

.include <bsd.port.mk>

# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: textproc/py-pystache/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	pystache
PORTVERSION=	0.5.3
CATEGORIES=	textproc www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Logic-less templates for Python

LICENSE=	MIT

# Python3 ready
USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

NO_STAGE=	yes
.include <bsd.port.pre.mk>

.if ${PYTHON_REL} >= 320
.include "${PORTSDIR}/devel/py-virtualenv/files/py3k-fix-pkg-plist.inc"
.endif

.include <bsd.port.post.mk>

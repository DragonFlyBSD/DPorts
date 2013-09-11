# Created by: Johannes Meixner <xmj@chaot.net>
# $FreeBSD: devel/py-xmltodict/Makefile 325672 2013-08-30 11:48:18Z wg $

PORTNAME=	xmltodict
PORTVERSION=	0.7.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	xmj@chaot.net
COMMENT=	XML parser that returns python dictionaries

LICENSE=	MIT

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} >= 320
.include "${PORTSDIR}/devel/py-virtualenv/files/py3k-fix-pkg-plist.inc"
.endif

.include <bsd.port.post.mk>

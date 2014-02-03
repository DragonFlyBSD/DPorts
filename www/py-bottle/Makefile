# Created by: Nicola Vitale <nivit@FreeBSD.org>
# $FreeBSD: www/py-bottle/Makefile 341745 2014-01-29 15:04:46Z miwi $

PORTNAME=	bottle
PORTVERSION=	0.11.6
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Fast and simple WSGI-framework for small web-applications

LICENSE=	MIT

# Python3 ready
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} >= 320
.include "${PORTSDIR}/devel/py-virtualenv/files/py3k-fix-pkg-plist.inc"
.endif

.include <bsd.port.post.mk>

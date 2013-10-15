# Created by: Nicola Vitale <nivit@FreeBSD.org>
# $FreeBSD: www/py-bottle/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	bottle
PORTVERSION=	0.11.6
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Fast and simple WSGI-framework for small web-applications

LICENSE=	MIT

# Python3 ready
USE_PYTHON=	2.6-
USE_PYDISTUTILS=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>

.if ${PYTHON_REL} >= 320
.include "${PORTSDIR}/devel/py-virtualenv/files/py3k-fix-pkg-plist.inc"
.endif

.include <bsd.port.post.mk>

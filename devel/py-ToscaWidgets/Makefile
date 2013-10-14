# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/py-ToscaWidgets/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	ToscaWidgets
PORTVERSION=	0.9.12
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	A python framework for building reusable web components

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}webob>=0:${PORTSDIR}/www/py-webob

USE_PYTHON=		2.5+
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 260
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}simplejson>=2.0.9:${PORTSDIR}/devel/py-simplejson
.endif

.include <bsd.port.post.mk>

# Created by: William Grzybowski <william88@gmail.com>
# $FreeBSD: www/py-django-tastypie/Makefile 324280 2013-08-05 16:56:08Z wg $

PORTNAME=	django-tastypie
PORTVERSION=	0.10.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Create REST API for Django apps

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mimeparse>=0:${PORTSDIR}/devel/py-mimeparse \
		${PYTHON_PKGNAMEPREFIX}dateutil>=2.1:${PORTSDIR}/devel/py-dateutil
RUN_DEPENDS:=	${BUILD_DEPENDS} \
		${PYTHON_PKGNAMEPREFIX}django>=1.5:${PORTSDIR}/www/py-django

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.pre.mk>

post-install:
.if ${PYTHON_REL} >= 320
.include "${PORTSDIR}/devel/py-virtualenv/files/py3k-fix-pkg-plist.inc"
.endif

.include <bsd.port.post.mk>

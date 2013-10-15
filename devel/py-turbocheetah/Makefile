# Created by: Nicola Vitale <nivit@email.it>
# $FreeBSD: devel/py-turbocheetah/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	TurboCheetah
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP \
		http://files.turbogears.org/eggs/ \
		http://nivi.interfree.it/distfiles/${PORTNAME}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	TurboGears plugin to support use of Cheetah templates

RUN_DEPENDS=	cheetah:${PORTSDIR}/devel/py-cheetah

USE_PYTHON=	2.5+
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.pre.mk>

.if ${ARCH} == "sparc64"
BROKEN=		leaves files behind on deinstall
.endif

.include <bsd.port.post.mk>

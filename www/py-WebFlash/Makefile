# New ports collection makefile for:	WebFlash
# Date created:		6th July, 2009
# Whom:			Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/www/py-WebFlash/Makefile,v 1.2 2012/11/17 06:02:58 svnexp Exp $
#

PORTNAME=	WebFlash
PORTVERSION=	0.1a9
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wenheping@gmail.com
COMMENT=	Library to display flash messages in python web applications

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 260
BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}simplejson>=0:${PORTSDIR}/devel/py-simplejson
.endif

.include <bsd.port.post.mk>

# Created by: Denis Shaposhnikov <dsh@vlink.ru>
# $FreeBSD: ports/www/py-webhelpers/Makefile,v 1.11 2012/12/31 00:10:46 svnexp Exp $

PORTNAME=	webhelpers
PORTVERSION=	1.3
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	WebHelpers-${PORTVERSION}

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Python helper functions for writing templates in web applications

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}routes>=1.1:${PORTSDIR}/www/py-routes \
		${PYTHON_PKGNAMEPREFIX}MarkupSafe>=0.11:${PORTSDIR}/textproc/py-MarkupSafe

USE_PYTHON=		-2.7
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	WebHelpers

.include <bsd.port.mk>

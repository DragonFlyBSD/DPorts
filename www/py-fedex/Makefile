# New ports collection makefile for:	py-fedex
# Date created:				31 May 2012
# Whom:					Kevin Golding <ports@caomhin.org>
#
# $FreeBSD: ports/www/py-fedex/Makefile,v 1.2 2012/11/17 06:02:59 svnexp Exp $
#

PORTNAME=	fedex
PORTVERSION=	1.0.13
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	A light wrapper around Fedex's Web Services SOAP API using suds

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}suds>=0:${PORTSDIR}/net/py-suds

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>

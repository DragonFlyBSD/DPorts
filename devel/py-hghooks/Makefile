# New ports collection makefile for:	py-hghooks
# Date created:				04 May 2012
# Whom:					William Grzybowski
#
# $FreeBSD: ports/devel/py-hghooks/Makefile,v 1.2 2012/11/17 05:56:47 svnexp Exp $
#

PORTNAME=	hghooks
PORTVERSION=	0.5.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	william88@gmail.com
COMMENT=	Set of Mercurial hooks

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install

PLIST_SUB=	VERSION=${PORTVERSION} PYVER=${PYTHON_VERSION:S/python//}

.include <bsd.port.mk>

# New ports collection makefile for:	py-msgpack
# Date created:				11 July 2011
# Whom:	      				Andrey Zonov <andrey@zonov.org>
#
# $FreeBSD: ports/devel/py-msgpack/Makefile,v 1.3 2012/11/17 05:56:48 svnexp Exp $
#

PORTNAME=	msgpack
PORTVERSION=	0.1.13
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}-python-${PORTVERSION}

MAINTAINER=	andrey@zonov.org
COMMENT=	MessagePack (de)serializer for Python

LICENSE=	AL2
LICENSE_FILE=	${WRKSRC}/COPYING

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	${PORTNAME}_python

.include <bsd.port.mk>

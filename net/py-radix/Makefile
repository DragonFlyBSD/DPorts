# Ports collection makefile for:	py-radix
# Date created:			10. August, 2005
# Whom:				Lars Erik Gullerud <lerik@nolink.net>
#
# $FreeBSD: ports/net/py-radix/Makefile,v 1.3 2012/11/17 06:00:16 svnexp Exp $
#

PORTNAME=	radix
PORTVERSION=	0.5
CATEGORIES=	net python
MASTER_SITES=	http://www2.mindrot.org/files/py-radix/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	py-${PORTNAME}-${PORTVERSION}

MAINTAINER=	lerik@nolink.net
COMMENT=	A Python radix-tree implementation

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PLIST_FILES=	%%PYTHON_SITELIBDIR%%/radix.so

.include <bsd.port.mk>

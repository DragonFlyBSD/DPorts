# New ports collection makefile for:	py-cloudfiles
# Date created:		2009-10-24
# Whom:			Roberto Pereyra <freebsd@contenidosonline.com.ar>
#
# $FreeBSD: ports/net/py-cloudfiles/Makefile,v 1.3 2012/11/17 06:00:16 svnexp Exp $
#

PORTNAME=	cloudfiles
PORTVERSION=	1.6.0
PORTREVISION=	1
CATEGORIES=	net python
MASTER_SITES=	http://www.contenidosonline.com.ar/freebsd/ports/ \
		LOCAL/yzlin
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	freebsd@contenidosonline.com.ar
COMMENT=	Python language bindings for Cloud Files API

USE_PYTHON=	2.5+
USE_PYDISTUTILS=	yes
PLIST_SUB+=	PYDISTUTILS_EGGINFO=${PYDISTUTILS_EGGINFO}

.include <bsd.port.mk>

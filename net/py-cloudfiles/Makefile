# Created by: Roberto Pereyra <freebsd@contenidosonline.com.ar>
# $FreeBSD: net/py-cloudfiles/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	cloudfiles
PORTVERSION=	1.6.0
PORTREVISION=	1
CATEGORIES=	net python
MASTER_SITES=	http://www.contenidosonline.com.ar/freebsd/ports/ \
		LOCAL/yzlin
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	freebsd@contenidosonline.com.ar
COMMENT=	Python language bindings for Cloud Files API

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PLIST_SUB+=	PYDISTUTILS_EGGINFO=${PYDISTUTILS_EGGINFO}

NO_STAGE=	yes
.include <bsd.port.mk>

# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: chinese/py-cconv/Makefile 327713 2013-09-20 16:01:22Z bapt $

PORTNAME=	cconv
PORTVERSION=	0.5.0
CATEGORIES=	chinese converters python
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}-python-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python wrapper for chinese/cconv

LIB_DEPENDS=	cconv:${PORTSDIR}/chinese/cconv

CFLAGS+=	-I${LOCALBASE}/include
USE_PYTHON=	yes
USE_PYDISTUTILS=yes

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/${PORTNAME}.so

NO_STAGE=	yes
.include <bsd.port.mk>

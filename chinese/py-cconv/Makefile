# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: chinese/py-cconv/Makefile 326670 2013-09-07 17:53:23Z sunpoet $

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

.include <bsd.port.mk>

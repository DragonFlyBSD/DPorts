# Created by: buganini@gmail.com
# $FreeBSD: ports/converters/py-bsdconv/Makefile,v 1.18 2012/11/17 05:55:04 svnexp Exp $

PORTNAME=	bsdconv
PORTVERSION=	9.0
CATEGORIES=	converters python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${GH_ACCOUNT}-${GH_PROJECT}-${PORTVERSION}-0-g${GH_COMMIT}

MAINTAINER=	buganini@gmail.com
COMMENT=	Python wrapper for bsdconv

LICENSE=	BSD

LIB_DEPENDS=	bsdconv:${PORTSDIR}/converters/bsdconv

USE_GITHUB=	yes
GH_ACCOUNT=	buganini
GH_PROJECT=	python-${PORTNAME}
GH_COMMIT=	2fcf39c

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PLIST_SUB=	PYTHON_SITELIBDIR=${PYTHON_SITELIBDIR:S|^${LOCALBASE}/||g}

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g' ${WRKSRC}/setup.py

.include <bsd.port.mk>

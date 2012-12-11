# Ports collection makefile for:	py-png
# Date created:				Nov 04, 2011
# Whom:					Zhihao Yuan <lichray@gmail.com>
#
# $FreeBSD: ports/graphics/py-png/Makefile,v 1.2 2012/11/17 05:58:20 svnexp Exp $

PORTNAME=	png
PORTVERSION=	0.0.12
CATEGORIES=	graphics python
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	py${PORTNAME}-${PORTVERSION}

MAINTAINER=	lichray@gmail.com
COMMENT=	Python PNG encoder/decoder

PROJECTHOST=	pypng

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	pypng

PLIST_SUB+=	PYEASYINSTALL_EGG=${PYEASYINSTALL_EGG}

.include <bsd.port.mk>

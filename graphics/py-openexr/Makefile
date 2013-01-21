# New ports collection makefile for:	py-openexr
# Date created:				10 October 2010
# Whom:					James Bowman <jamesb-bsd@excamera.com>
#
# $FreeBSD: ports/graphics/py-openexr/Makefile,v 1.3 2013/01/17 04:09:20 svnexp Exp $
#

PORTNAME=	openexr
PORTVERSION=	1.2.0
PORTREVISION=	1
CATEGORIES=	graphics python
MASTER_SITES=	http://excamera.com/files/ \
		CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	OpenEXR-${PORTVERSION}

MAINTAINER=	jamesb-bsd@excamera.com
COMMENT=	Python module for ILM's OpenEXR image format and library

LIB_DEPENDS=	IlmImf:${PORTSDIR}/graphics/OpenEXR

post-extract:
	${REINPLACE_CMD} -e 's#/usr/local#${LOCALBASE}#g' ${WRKSRC}/setup.py

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	OpenEXR
MASTER_SITE_SUBDIR=source/O/OpenEXR

.include <bsd.port.mk>

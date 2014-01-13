# Created by: Choe, Cheng-Dae
# $FreeBSD: graphics/py-freeimagepy/Makefile 337765 2013-12-27 17:40:35Z wg $

PORTNAME=	freeimagepy
PORTVERSION=	2.0.1
CATEGORIES=	graphics python
MASTER_SITES=	SF/${PORTNAME}/FreeImagePy/V${PORTVERSION}
PKGNAMEPREFIX=  ${PYTHON_PKGNAMEPREFIX}
DISTNAME=	FreeImagePy_w_dll-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	FreeImage library python wrapper

LIB_DEPENDS=	libfreeimage.so:${PORTSDIR}/graphics/freeimage

WRKSRC=		${WRKDIR}/FreeImagePy-${PORTVERSION}
USE_BZIP2=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>

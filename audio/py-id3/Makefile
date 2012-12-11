# New ports collection makefile for:	py-id3
# Date created:		8 October 2002
# Whom:			Hye-Shik Chang
#
# $FreeBSD: ports/audio/py-id3/Makefile,v 1.6 2012/11/17 05:54:41 svnexp Exp $

PORTNAME=	id3
PORTVERSION=	1.2
CATEGORIES=	audio python
MASTER_SITES=	SF/${PORTNAME}-py/${PORTNAME}-py/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	id3-py_${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python module for retrieving and setting ID3 tags on MP3 files

WRKSRC=		${WRKDIR}/id3-py-${PORTVERSION}
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
USE_PYTHON_PREFIX=	yes
PYDISTUTILS_PKGNAME=	ID3

.include <bsd.port.mk>

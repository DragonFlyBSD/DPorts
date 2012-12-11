# New ports collection makefile for:	py-sympy
# Date created:		2008-08-09
# Whom:			Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/math/py-sympy/Makefile,v 1.10 2012/11/17 05:59:29 svnexp Exp $
#

PORTNAME=	sympy
PORTVERSION=	0.7.1
CATEGORIES=	math python
MASTER_SITES=	GOOGLE_CODE \
		CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	A Python Library For Symbolic Mathematics

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_PYTHON=	2.5+
USE_PYDISTUTILS=	yes

MAN1=	isympy.1

OPTIONS=	PYGLET "Enable plotting support" Off

.include <bsd.port.options.mk>

.if defined(WITH_PYGLET)
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}pyglet>=1.1.2:${PORTSDIR}/graphics/py-pyglet
.endif

post-patch:
	@${REINPLACE_CMD} -e "s#share/man/man1#man/man1#" ${WRKSRC}/setup.py

.include <bsd.port.mk>

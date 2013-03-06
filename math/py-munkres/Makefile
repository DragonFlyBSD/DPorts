# Created by: Mark Felder <feld@feld.me>
# $FreeBSD: ports/math/py-munkres/Makefile,v 1.2 2013/02/24 21:51:35 svnexp Exp $

PORTNAME=	munkres
PORTVERSION=	1.0.5.4
PORTREVISION=	1
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP

MAINTAINER=	feld@feld.me
COMMENT=	A Python implementation of the munkres algorithm

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/munkres.py \
		%%PYTHON_SITELIBDIR%%/munkres.pyc \
		%%PYTHON_SITELIBDIR%%/munkres.pyo

.include <bsd.port.mk>

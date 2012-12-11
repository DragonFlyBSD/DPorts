# New ports collection makefile for:	six
# Date created:				15 Nov 2011
# Whom:					Cheng-Lung Sung <clsung@FreeBSD.org>
#
# $FreeBSD: ports/devel/py-six/Makefile,v 1.3 2012/11/17 05:56:50 svnexp Exp $
#

PORTNAME=	six
PORTVERSION=	1.1.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	clsung@FreeBSD.org
COMMENT=	Python 2 and 3 compatibility utilities

LICENSE=	MIT

# Python3 ready
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/six.py \
		%%PYTHON_SITELIBDIR%%/six.pyc \
		%%PYTHON_SITELIBDIR%%/six.pyo

.include <bsd.port.mk>

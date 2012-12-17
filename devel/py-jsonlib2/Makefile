# New ports collection makefile for:	py-jsonlib2
# Date created:		9th June, 2009
# Whom:			Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/devel/py-jsonlib2/Makefile,v 1.10 2012/11/17 05:56:48 svnexp Exp $
#

PORTNAME=	jsonlib2
PORTVERSION=	1.5.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	JSON Serializer/Deserializer for Python

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install
PYEASYINSTALL_ARCHDEP=	yes

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>

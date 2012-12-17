# New ports collection makefile for:	py-jsonlib
# Date created:		2008-07-21
# Whom:			Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/devel/py-jsonlib/Makefile,v 1.10 2012/11/17 05:56:48 svnexp Exp $
#

PORTNAME=	jsonlib
PORTVERSION=	1.6.1
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	JSON Serializer/Deserializer for Python

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install
PYEASYINSTALL_ARCHDEP=	yes

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>

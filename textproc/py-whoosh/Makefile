# New ports collection makefile for:	py-whoosh
# Date created:		2012-04-21
# Whom:			gugabsd <gugabsd@mundounix.com.br>
#
# $FreeBSD: ports/textproc/py-whoosh/Makefile,v 1.3 2012/11/17 06:02:18 svnexp Exp $
#

PORTNAME=	whoosh
PORTVERSION=	2.4.1
CATEGORIES=	textproc www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Whoosh-${PORTVERSION}

MAINTAINER=	gugabsd@mundounix.com.br
COMMENT=	Featureful full-text indexing and searching in Python

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	Whoosh

.include <bsd.port.mk>

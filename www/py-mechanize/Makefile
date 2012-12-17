# ex:ts=8
# Ports collection makefile for:	py-mechanize
# Date created:			Apr 29, 2005
# Whom:				ijliao
#
# $FreeBSD: ports/www/py-mechanize/Makefile,v 1.16 2012/11/17 06:03:00 svnexp Exp $
#

PORTNAME=	mechanize
PORTVERSION=	0.2.5
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP \
		http://wwwsearch.sourceforge.net/mechanize/src/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Stateful programmatic web browsing in Python

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>

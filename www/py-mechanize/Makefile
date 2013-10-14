# Created by: ijliao
# $FreeBSD: www/py-mechanize/Makefile 327776 2013-09-20 23:36:50Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>

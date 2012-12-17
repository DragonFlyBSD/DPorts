# New ports collection makefile for: py-urllib3
# Date created:		2012-01-09
# Whom:		Olivier Duchateau <duchateau.olivier@gmail.com>
#
# $FreeBSD: ports/net/py-urllib3/Makefile,v 1.6 2012/11/17 06:00:16 svnexp Exp $
#

PORTNAME=	urllib3
PORTVERSION=	1.4
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	olivierd@FreeBSD.org
COMMENT=	Enhance HTTP Python's standard library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

post-patch:
	@${REINPLACE_CMD} -e "s|'dummyserver', ||" ${WRKSRC}/setup.py

.include <bsd.port.mk>

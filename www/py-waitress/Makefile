# New ports collection makefile for: py-waitress
# Date created:		2012-01-02
# Whom:		Olivier Duchateau <duchateau.olivier@gmail.com>
#
# $FreeBSD: ports/www/py-waitress/Makefile,v 1.4 2012/11/17 06:03:02 svnexp Exp $
#

PORTNAME=	waitress
PORTVERSION=	0.8.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	duchateau.olivier@gmail.com
COMMENT=	Python WSGI server

LICENSE=	ZPL21
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

# Avoid to install patch files backup
post-patch:
	@cd ${WRKSRC} && \
		${FIND} . -type f -name '*.orig' -exec ${RM} -f \{\} \;

.include <bsd.port.mk>

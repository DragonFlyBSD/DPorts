# Created by: Olivier Duchateau
# $FreeBSD: www/py-waitress/Makefile 319073 2013-05-25 20:11:48Z olivierd $
#

PORTNAME=	waitress
PORTVERSION=	0.8.4
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	olivierd@FreeBSD.org
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

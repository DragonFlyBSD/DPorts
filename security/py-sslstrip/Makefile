# Created by: User & <dragon@njord.localdomain>
# $FreeBSD: security/py-sslstrip/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	sslstrip
PORTVERSION=	0.9
CATEGORIES=	security python
MASTER_SITES=	http://www.thoughtcrime.org/software/sslstrip/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kitchetech@gmail.com
COMMENT=	Python program for SSL stripping

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	sslstrip
RUN_DEPENDS =	${LOCALBASE}/lib/python2.7/site-packages/twisted/web:${PORTSDIR}/www/py-twistedWeb
NO_STAGE=	yes
.include <bsd.port.mk>

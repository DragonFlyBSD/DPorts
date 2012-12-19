# New ports collection makefile for:	py-django-reversion
# Date created:				19 Jun 2012
# Whom:					Matthew X. Economou <xenophon+fbsdports@irtnog.org>
#
# $FreeBSD: ports/www/py-django-reversion/Makefile,v 1.2 2012/11/17 06:02:59 svnexp Exp $
#

PORTNAME=	django-reversion
PORTVERSION=	1.6.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	xenophon+fbsdports@irtnog.org
COMMENT=	Provides comprehensive version control facilities to Django apps

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django>=0:${PORTSDIR}/www/py-django

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>

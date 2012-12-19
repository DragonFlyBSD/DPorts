# New ports collection makefile for:	py-turbomail
# Date created:		2007-01-24
# Whom:			Nicola Vitale <nivit@FreeBSD.org>
#
# $FreeBSD: ports/mail/py-turbomail/Makefile,v 1.11 2012/11/17 05:59:12 svnexp Exp $
#

PORTNAME=	turbomail
PORTVERSION=	3.0.3
PORTREVISION=	2
CATEGORIES=	mail www python
MASTER_SITES=	CHEESESHOP \
		http://nivi.interfree.it/distfiles/${PORTNAME}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	TurboMail-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Multi-threaded mail queue manager for TurboGears applications

BUILD_DEPENDS=	tg-admin:${PORTSDIR}/www/py-turbogears
RUN_DEPENDS:=	${BUILD_DEPENDS}

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

USE_PYTHON=	2.5+
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	TurboMail

.include <bsd.port.mk>

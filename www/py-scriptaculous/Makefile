# New ports collection makefile for:	py-scriptaculous
# Date created:		2007-02-14
# Whom:			Nicola Vitale <nivit@FreeBSD.org>
#
# $FreeBSD: ports/www/py-scriptaculous/Makefile,v 1.7 2012/11/17 06:03:01 svnexp Exp $
#

PORTNAME=	scriptaculous
PORTVERSION=	1.8.1.1
PORTREVISION=	2
CATEGORIES=	www python
MASTER_SITES=	http://static.ossdl.de/tgwidgets/downloads/ \
		http://nivi.interfree.it/distfiles/${PORTNAME}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Scriptaculous-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Scriptaculous packaged as TurboGears widgets

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}TurboGears>=1.1.2:${PORTSDIR}/www/py-turbogears
RUN_DEPENDS:=	${BUILD_DEPENDS}

PYDISTUTILS_PKGNAME=	Scriptaculous

# Use the same version of www/py-turbogears
USE_PYTHON=	2.5+
USE_PYDISTUTILS=	easy_install
USE_ZIP=	yes

.include <bsd.port.mk>

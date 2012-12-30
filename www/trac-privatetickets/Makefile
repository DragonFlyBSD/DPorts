# New ports collection makefile for:	trac-privatetickets
# Date created:		Feb. 20, 2007
# Whom:			Li-Wen Hsu <lwhsu@lwhsu.org>
#
# $FreeBSD: ports/www/trac-privatetickets/Makefile,v 1.10 2012/11/17 06:03:08 svnexp Exp $
#

PORTNAME=	privatetickets
PORTVERSION=	2.0.2
PORTREVISION=	2
CATEGORIES=	www devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	trac-
DISTNAME=	TracPrivateTickets-${PORTVERSION}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Modified ticket security for Trac

RUN_DEPENDS=	tracd:${PORTSDIR}/www/trac

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	TracPrivateTickets

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>

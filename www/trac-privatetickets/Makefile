# Created by: Li-Wen Hsu <lwhsu@lwhsu.org>
# $FreeBSD: www/trac-privatetickets/Makefile 341186 2014-01-26 14:32:32Z miwi $

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

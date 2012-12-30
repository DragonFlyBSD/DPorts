# Created by: Gerrit Beine <gerrit.beine@gmx.de>
# $FreeBSD: ports/www/trac-macropost/Makefile,v 1.12 2012/11/17 06:03:08 svnexp Exp $

PORTNAME=	macropost
PORTVERSION=	0.2
PORTREVISION=	3
CATEGORIES=	www devel python
MASTER_SITES=	http://www.gerritbeine.de/download/trac/
PKGNAMEPREFIX=	trac-
DISTNAME=	${PORTNAME}plugin-${PORTVERSION}

MAINTAINER=	glarkin@FreeBSD.org
COMMENT=	Allows Macros to use POST in forms

RUN_DEPENDS+=	tracd:${PORTSDIR}/www/trac

WRKSRC=		${WRKDIR}/${PORTNAME}plugin
USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	TracMacroPost
PLIST_FILES=		%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>

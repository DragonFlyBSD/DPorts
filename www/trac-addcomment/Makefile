# Created by: Gerrit Beine <gerrit.beine@gmx.de>
# $FreeBSD: ports/www/trac-addcomment/Makefile,v 1.14 2012/11/17 06:03:07 svnexp Exp $

PORTNAME=	addcomment
PORTVERSION=	0.3
PORTREVISION=	3
CATEGORIES=	www devel python
MASTER_SITES=	http://www.gerritbeine.de/download/trac/
PKGNAMEPREFIX=	trac-
DISTNAME=	${PORTNAME}macro-${PORTVERSION}

MAINTAINER=	brooks@FreeBSD.org
COMMENT=	Add formatted comments to wiki pages

RUN_DEPENDS+=	tracd:${PORTSDIR}/www/trac \
		trac-macropost>0:${PORTSDIR}/www/trac-macropost

WRKSRC=		${WRKDIR}/${PORTNAME}macro
USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	TracAddCommentMacro
PLIST_FILES=		%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>

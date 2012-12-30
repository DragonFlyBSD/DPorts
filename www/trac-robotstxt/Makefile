# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: ports/www/trac-robotstxt/Makefile,v 1.8 2012/11/17 06:03:08 svnexp Exp $

PORTNAME=	robotxt
PORTVERSION=	1.0.1
PORTREVISION=	4
CATEGORIES=	www devel python
MASTER_SITES=	http://freebsd.unixfreunde.de/sources/trac/
PKGNAMEPREFIX=	trac-
DISTNAME=	TracRobotsTxt-${PORTVERSION}

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Allows simple management of a robots.txt

RUN_DEPENDS=	tracd:${PORTSDIR}/www/trac

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	TracRobotsTxt
PLIST_FILES=		%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>

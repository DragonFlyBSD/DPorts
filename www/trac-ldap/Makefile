# Created by: Gerrit Beine <gerrit.beine@gmx.de>
# $FreeBSD: ports/www/trac-ldap/Makefile,v 1.15 2012/11/17 06:03:08 svnexp Exp $

PORTNAME=	ldap
PORTVERSION=	0.5.1
PORTREVISION=	7
CATEGORIES=	www devel python
MASTER_SITES=	http://www.gerritbeine.de/download/trac/
PKGNAMEPREFIX=	trac-
DISTNAME=	${PORTNAME}plugin-${PORTVERSION}

MAINTAINER=	glarkin@FreeBSD.org
COMMENT=	LDAP extensions for Trac

RUN_DEPENDS+=	tracd:${PORTSDIR}/www/trac \
		${PYTHON_PKGNAMEPREFIX}ldap2>=2.3.1:${PORTSDIR}/net/py-ldap2

WRKSRC=		${WRKDIR}/${PORTNAME}plugin
USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	LdapPlugin
PYDISTUTILS_PKGVERSION=	${PORTVERSION}dev
PLIST_FILES=		%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>

# New ports collection makefile for:	py-Products.PloneLDAP
# Date created:				20 May 2012
# Whom:					Lawrence Stewart <lstewart@freebsd.org>
#
# $FreeBSD: ports/www/py-Products.PloneLDAP/Makefile,v 1.2 2012/11/17 06:02:58 svnexp Exp $
#

PORTNAME=	Products.PloneLDAP
PORTVERSION=	1.1
CATEGORIES=	www python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	zope@FreeBSD.org
COMMENT=	LDAP/Active Directory support for Plone

LICENSE=	ZPL21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Products.LDAPMultiPlugins>=1.10:${PORTSDIR}/devel/py-Products.LDAPMultiPlugins \
		${PYTHON_PKGNAMEPREFIX}Products.LDAPUserFolder>=2.9:${PORTSDIR}/devel/py-Products.LDAPUserFolder

DIST_SUBDIR=	zope
USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>

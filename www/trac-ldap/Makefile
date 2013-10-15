# Created by: Gerrit Beine <gerrit.beine@gmx.de>
# $FreeBSD: www/trac-ldap/Makefile 327776 2013-09-20 23:36:50Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>

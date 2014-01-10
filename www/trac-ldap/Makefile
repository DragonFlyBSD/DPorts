# Created by: Gerrit Beine <gerrit.beine@gmx.de>
# $FreeBSD: www/trac-ldap/Makefile 337578 2013-12-26 17:54:58Z wg $

PORTNAME=	ldap
PORTVERSION=	0.5.1
PORTREVISION=	8
CATEGORIES=	www devel python
MASTER_SITES=	http://www.gerritbeine.de/download/trac/
PKGNAMEPREFIX=	trac-
DISTNAME=	${PORTNAME}plugin-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	LDAP extensions for Trac

RUN_DEPENDS+=	tracd:${PORTSDIR}/www/trac \
		${PYTHON_PKGNAMEPREFIX}ldap2>=2.3.1:${PORTSDIR}/net/py-ldap2

WRKSRC=		${WRKDIR}/${PORTNAME}plugin
USE_PYTHON=	2
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>

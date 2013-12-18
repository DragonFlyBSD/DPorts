# Created by: Gerrit Beine <gerrit.beine@gmx.de>
# $FreeBSD: www/trac-wikinotification/Makefile 336656 2013-12-16 18:24:49Z glarkin $

PORTNAME=	wikinotificationplugin
PORTVERSION=	0.2.1
PORTREVISION=	4
CATEGORIES=	www devel python
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	brooks
PKGNAMEPREFIX=	trac-
DISTNAME=	${PORTNAME}-${PORTVERSION:S/p/rc/}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Allow email notifications on wiki page changes

RUN_DEPENDS+=	tracd:${PORTSDIR}/www/trac

WRKSRC=		${WRKDIR}/${PORTNAME}
USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install
PYDISTUTILS_PKGNAME=	TracWikiNotification
PYDISTUTILS_PKGVERSION=	${PORTVERSION:S/p/rc/}

NO_STAGE=	yes
.include <bsd.port.mk>

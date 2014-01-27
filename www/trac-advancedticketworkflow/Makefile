# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: www/trac-advancedticketworkflow/Makefile 341180 2014-01-26 14:30:59Z miwi $

PORTNAME=	advancedticketworkflow
PORTVERSION=	0.10.3940
PORTREVISION=	2
CATEGORIES=	www devel python
MASTER_SITES=	http://people.freebsd.org/~mm/trac/
PKGNAMEPREFIX=	trac-
DISTNAME=	${PORTNAME}plugin-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Advanced Ticket Workflow Plugin for Trac

RUN_DEPENDS+=	tracd:${PORTSDIR}/www/trac

WRKSRC=		${WRKDIR}/${PORTNAME}plugin/0.11
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	AdvancedTicketWorkflowPlugin
PYDISTUTILS_PKGVERSION=	${PORTVERSION:R}dev

PLIST_SUB+=	PORTVERSION=${PORTVERSION:R}dev PYTHONVERSION=${PYTHON_VER}
PYDISTUTILS_NOEGGINFO=	yes

.include <bsd.port.mk>

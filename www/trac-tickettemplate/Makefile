# Created by: Eygene Ryabinkin <rea@FreeBSD.org>
# $FreeBSD: ports/www/trac-tickettemplate/Makefile,v 1.3 2012/12/26 11:45:08 svnexp Exp $

PORTNAME=	tickettemplate
PORTVERSION=	0.7
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	http://dist.codelabs.ru/fbsd/trac-${PORTNAME}/
PKGNAMEPREFIX=	trac-
DISTNAME=	trac${PORTNAME}plugin-r${REL}

MAINTAINER=	rea@FreeBSD.org
COMMENT=	Plugin for making ticket templates

RUN_DEPENDS+=	trac>=0.11:${PORTSDIR}/www/trac

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	TracTicketTemplate
USE_ZIP=	yes

WRKSRC=		${WRKDIR}/trac${PORTNAME}plugin/0.11
REL=		10605
PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>

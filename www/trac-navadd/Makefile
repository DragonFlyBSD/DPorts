# $FreeBSD: www/trac-navadd/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	${PYDISTUTILS_PKGNAME:S;^Trac;;:tl}
PORTVERSION=	0.1
PORTREVISION=	3
CATEGORIES=	www devel python
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	brooks
PKGNAMEPREFIX=	trac-
DISTNAME=	${PORTNAME}plugin-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Plugin for adding navigation items into Trac navigation bars

RUN_DEPENDS+=	tracd:${PORTSDIR}/www/trac

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	NavAdd
WRKSRC=			${WRKDIR}/${PORTNAME}plugin
PLIST_FILES=		%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

NO_STAGE=	yes
.include <bsd.port.mk>

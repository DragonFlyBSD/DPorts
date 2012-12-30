# Created by: Gerrit Beine <gerrit.beine@gmx.de>
# $FreeBSD: ports/www/trac-xmlrpc/Makefile,v 1.12 2012/11/17 06:03:08 svnexp Exp $

PORTNAME=	xmlrpc
PORTVERSION=	1.0.6
PORTREVISION=	3
CATEGORIES=	www devel python
MASTER_SITES=	http://shuqun.com/files/ \
		LOCAL/glarkin
PKGNAMEPREFIX=	trac-
DISTNAME=	${PORTNAME}plugin-${PORTVERSION}

MAINTAINER=	glarkin@FreeBSD.org
COMMENT=	Provides an xml rpc interface to Trac

LICENSE=	BSD

RUN_DEPENDS+=	tracd:${PORTSDIR}/www/trac

WRKSRC=		${WRKDIR}/${PORTNAME}plugin
USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	TracXMLRPC
PLIST_FILES=		%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>

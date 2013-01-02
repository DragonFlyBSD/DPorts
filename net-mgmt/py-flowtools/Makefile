# Ports collection makefile for:	py-flowtools
# Date created:				16 Sep 2004
# Whom:	      				Roman Bogorodskiy <bogorodskiy@inbox.ru>
#
# $FreeBSD: ports/net-mgmt/py-flowtools/Makefile,v 1.9 2012/11/17 06:00:36 svnexp Exp $
#

PORTNAME=	flowtools
PORTVERSION=	0.3.4.1
CATEGORIES=	net-mgmt python
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pyflowtools-${PORTVERSION}

MAINTAINER=	novel@FreeBSD.org
COMMENT=	Python extension module for reading flow-tools' data

BUILD_DEPENDS=	${LOCALBASE}/include/ftlib.h:${PORTSDIR}/net-mgmt/flow-tools

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/flowtools.so

CFLAGS+=	-I${LOCALBASE}/include -L${LOCALBASE}/lib
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	pyflowtools

PROJECTHOST=	py${PORTNAME}

.include <bsd.port.mk>

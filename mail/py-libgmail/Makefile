# Ports collection makefile for:	libgmail
# Date created:				Sep 27, 2005
# Whom:					Ying-Chieh Liao <ijliao@csie.nctu.edu.tw>
#
# $FreeBSD: ports/mail/py-libgmail/Makefile,v 1.10 2012/11/17 05:59:12 svnexp Exp $
#

PORTNAME=	libgmail
DISTVERSION=	0.1.11
CATEGORIES=	mail python
MASTER_SITES=	SF
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library to provide access to Gmail via Python

BUILD_DEPENDS=	py*-mechanize>=0:${PORTSDIR}/www/py-mechanize
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>

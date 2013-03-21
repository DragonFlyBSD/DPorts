# New ports collection makefile for:	fugu
# Date created:				11 August 2000
# Whom:					Peter Haight <peterh@sapros.com>
#
# $FreeBSD: ports/net-im/fugu/Makefile,v 1.19 2012/11/17 06:00:26 svnexp Exp $
#

PORTNAME=	fugu
PORTVERSION=	1.2.3
CATEGORIES=	net-im python
MASTER_SITES=	http://fugu.gale.org/dist/

MAINTAINER=	5u623l20@gmail.com
COMMENT=	A graphical client for the Gale instant messaging system

RUN_DEPENDS+=	${PYTHON_SITELIBDIR}/Pmw:${PORTSDIR}/x11-toolkits/py-Pmw

USE_OPENSSL=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>

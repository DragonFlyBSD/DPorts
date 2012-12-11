# ex:ts=8
# Ports collection makefile for:	py-ciphon
# Date created:			Feb 10, 2002
# Whom:				ijliao
#
# $FreeBSD: ports/devel/py-ciphon/Makefile,v 1.11 2012/11/17 05:56:45 svnexp Exp $
#

PORTNAME=	ciphon
PORTVERSION=	0.4.0
CATEGORIES=	devel python
MASTER_SITES=	SF/pythonsiphon/${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	xride@FreeBSD.org
COMMENT=	A module for python that adds cpan-like functionality

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

post-install:
	@${MV} -f ${PREFIX}/bin/ciphon.py ${PREFIX}/bin/ciphon

.include <bsd.port.mk>

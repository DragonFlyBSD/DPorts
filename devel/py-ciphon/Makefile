# Created by: ijliao
# $FreeBSD: devel/py-ciphon/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	ciphon
PORTVERSION=	0.4.0
CATEGORIES=	devel python
MASTER_SITES=	SF/pythonsiphon/${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	xride@FreeBSD.org
COMMENT=	A module for python that adds cpan-like functionality

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

NO_STAGE=	yes
post-install:
	@${MV} -f ${PREFIX}/bin/ciphon.py ${PREFIX}/bin/ciphon

.include <bsd.port.mk>

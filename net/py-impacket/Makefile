# New ports collection makefile for:	Impacket
# Date created:				15th September 2005
# Whom:					Marcin Jessa <yazzy@yazzy.org>
#
# $FreeBSD: ports/net/py-impacket/Makefile,v 1.6 2012/11/17 06:00:16 svnexp Exp $

PORTNAME=	Impacket
PORTVERSION=	0.9.6.0
CATEGORIES=	net python
MASTER_SITES=	http://oss.coresecurity.com/repo/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Collection of Python classes providing access to network packets

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/pcapy.so:${PORTSDIR}/net/py-pcapy

USE_PYTHON=	yes
NO_BUILD=	yes
USE_PYDISTUTILS=yes

.if defined(NOPORTDOCS)
post-install:
	@${RM} -rf ${DOCSDIR}
	@${ECHO} "Removing ${DOCSDIR} and the files in it."
.endif

.include <bsd.port.mk>

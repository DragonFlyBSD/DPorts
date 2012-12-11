# New ports collection makefile for:	py-spf
# Date created:				26 Dec 2004
# Whom:					Marcus Alves Grando <mnag@FreeBSD.org>
#
# $FreeBSD: ports/mail/py-spf/Makefile,v 1.12 2012/11/17 05:59:12 svnexp Exp $
#

PORTNAME=	spf
PORTVERSION=	2.0.7
CATEGORIES=	mail python
MASTER_SITES=	SF/pymilter/py${PORTNAME}/py${PORTNAME}-${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	py${PORTNAME}-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python implementation of the RFC 4408 SPF protocol

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dns>=0:${PORTSDIR}/dns/py-dns

OPTIONS_DEFINE=	DOCS

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	py${PORTNAME}

PORTDOCS=	CHANGELOG README

.include <bsd.port.options.mk>

post-patch:
	@${REINPLACE_CMD} -e '1 s|/usr/bin/python|${PYTHON_CMD}|' ${WRKSRC}/spf.py

post-install:
	${CHMOD} ${BINMODE} ${PYTHONPREFIX_SITELIBDIR}/spf.py
	${LN} -s ${PYTHONPREFIX_SITELIBDIR}/spf.py ${PREFIX}/bin/
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}/
	cd ${WRKSRC}/ && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}/
.endif

.include <bsd.port.mk>

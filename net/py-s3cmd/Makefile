# New ports collection makefile for:	s3cmd
# Date created:		2007-05-02
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/net/py-s3cmd/Makefile,v 1.17 2012/11/17 06:00:16 svnexp Exp $
#

PORTNAME=	s3cmd
PORTVERSION=	1.0.1
PORTREVISION=	1
CATEGORIES=	net python
MASTER_SITES=	SF/s3tools/${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	clsung@FreeBSD.org
COMMENT=	Unix-like tools to manipulate stored files from the command line

USE_PYDISTUTILS=	yes
USE_PYTHON=	2.5-2.7

MAN1=		s3cmd.1

FETCH_ARGS=	-Fpr

post-patch:
	${REINPLACE_CMD} -e 's,share/man,man,' ${WRKSRC}/setup.py
.ifndef(NOPORTDOCS)
	${REINPLACE_CMD} -e 's,doc/packages,doc,' ${WRKSRC}/setup.py
.else
	${REINPLACE_CMD} -e '/(doc_path+/d' ${WRKSRC}/setup.py
.endif

.include <bsd.port.mk>

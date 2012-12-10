# ex:ts=8
# Ports collection makefile for:	cflow2vcg
# Date created:			May 14, 2002
# Whom:				ijliao
#
# $FreeBSD: ports/devel/cflow2vcg/Makefile,v 1.9 2012/11/17 05:55:36 svnexp Exp $
#

PORTNAME=	cflow2vcg
PORTVERSION=	0.5
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Convert the result of the cflow utility in a VCG format

GNU_CONFIGURE=	yes

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/cflow* ${DOCSDIR}
.endif

.include <bsd.port.mk>

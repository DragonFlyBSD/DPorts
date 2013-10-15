# Created by: ijliao
# $FreeBSD: devel/cflow2vcg/Makefile 327722 2013-09-20 17:03:26Z bapt $

PORTNAME=	cflow2vcg
PORTVERSION=	0.5
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Convert the result of the cflow utility in a VCG format

GNU_CONFIGURE=	yes

NO_STAGE=	yes
post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/cflow* ${DOCSDIR}
.endif

.include <bsd.port.mk>

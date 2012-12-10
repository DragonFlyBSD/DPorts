# New ports collection makefile for:	buddy
# Date created:		31 August 2004
# Whom:			Leland Wang <llwang@infor.org>
#
# $FreeBSD: ports/science/buddy/Makefile,v 1.12 2012/11/17 06:00:56 svnexp Exp $
#

PORTNAME=	buddy
PORTVERSION=	2.4
PORTREVISION=	1
CATEGORIES=	science
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/BuDDy%20${PORTVERSION}

MAINTAINER=	llwang@infor.org
COMMENT=	A Binary Decision Diagram library

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_LDCONFIG=	yes

DOCS=		doc/bddnotes.ps doc/buddy.ps doc/tech.txt README AUTHORS

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${DOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
.endif

.include <bsd.port.mk>

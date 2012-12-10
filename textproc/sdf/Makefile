# New ports collection makefile for:	sdf
# Date created:				12 December 2000
# Whom:					dannyman <dannyman@tellme.com>
#
# $FreeBSD: ports/textproc/sdf/Makefile,v 1.9 2012/11/17 06:02:21 svnexp Exp $
#

PORTNAME=	sdf
PORTVERSION=	2.001
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:IANC
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple Document Format - "author-friendly" mark-up system

PERL_CONFIGURE=	yes

MAN1=		pod2sdf.1

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@(cd ${WRKSRC}/doc && ${COPYTREE_SHARE} . ${DOCSDIR})
.endif

.include <bsd.port.mk>

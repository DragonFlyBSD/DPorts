# New ports collection makefile for:	p5-Devel-PPPort
# Date created:				8 Aug 2004
# Whom:	      				mat
#
# $FreeBSD: ports/devel/p5-Devel-PPPort/Makefile,v 1.29 2012/11/17 05:56:13 svnexp Exp $
#

PORTNAME=	Devel-PPPort
DISTVERSION=	3.20
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MHX
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl/Pollution/Portability

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

PERL_CONFIGURE=	yes

MAN3=		Devel::PPPort.3

.if !defined(NOPORTDOCS)
PORTDOCS=	Changes README HACKERS TODO

post-install:
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
	@${ECHO_MSG} "===> Documentation installed in ${DOCSDIR}."
.endif

.include <bsd.port.mk>

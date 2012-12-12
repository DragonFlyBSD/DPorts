# New ports collection makefile for:	p5-CGI-Minimal
# Date created:				26th December 2000
# Whom:	      				Ade Lovett <ade@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-CGI-Minimal/Makefile,v 1.22 2012/11/17 06:02:46 svnexp Exp $
#

PORTNAME=	CGI-Minimal
PORTVERSION=	1.29
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extremely lightweight CGI processing package

PERL_CONFIGURE=	yes

MAN3=		CGI::Minimal.3

.if !defined(NOPORTDOCS)
PORTDOCS=	Changes README TODO

post-install:
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
	@${ECHO_MSG} "===> Documentation installed in ${DOCSDIR}."
.endif

.include <bsd.port.mk>

# Created by: Ade Lovett <ade@FreeBSD.org>
# $FreeBSD: www/p5-CGI-Minimal/Makefile 331301 2013-10-22 16:57:44Z mat $

PORTNAME=	CGI-Minimal
PORTVERSION=	1.29
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extremely lightweight CGI processing package

USES=		perl5
USE_PERL5=	configure
NO_STAGE=	yes

MAN3=		CGI::Minimal.3

.if !defined(NOPORTDOCS)
PORTDOCS=	Changes README TODO

post-install:
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
	@${ECHO_MSG} "===> Documentation installed in ${DOCSDIR}."
.endif

.include <bsd.port.mk>

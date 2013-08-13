# Created by: mat
# $FreeBSD: mail/p5-Log-Procmail/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Log-Procmail
PORTVERSION=	0.12
CATEGORIES=	mail devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for reading procmail logfiles

USES=		perl5
USE_PERL5=	configure

MAN1=		mailstat.pl.1
MAN3=		Log::Procmail.3

.if !defined(NOPORTDOCS)
PORTDOCS=	Changes

post-install:
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
	@${ECHO_MSG} "===> Documentation installed in ${DOCSDIR}."
.endif

.include <bsd.port.mk>

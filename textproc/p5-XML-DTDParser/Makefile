# Created by: clsung@dragon2.net
# $FreeBSD: textproc/p5-XML-DTDParser/Makefile 331301 2013-10-22 16:57:44Z mat $

PORTNAME=	XML-DTDParser
PORTVERSION=	2.01
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for parsing XML DTD strings

USES=		perl5
USE_PERL5=	configure
NO_STAGE=	yes

MAN3=		XML::DTDParser.3

.if !defined(NOPORTDOCS)
PORTDOCS=	Changes

post-install:
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
	@${ECHO_MSG} "===> Documentation installed in ${DOCSDIR}."
.endif

.include <bsd.port.mk>

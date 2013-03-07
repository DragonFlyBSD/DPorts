# Created by: Bill "I hate Perl" Fumerola
# $FreeBSD: ports/textproc/p5-Text-Template/Makefile,v 1.21 2013/02/11 17:04:31 svnexp Exp $

PORTNAME=	Text-Template
PORTVERSION=	1.46
CATEGORIES=	textproc perl5
MASTER_SITES=	http://perl.plover.com/Template/ \
		CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Expand template text with embedded Perl

LICENSE=	ART10 GPLv2
LICENSE_COMB=	dual

PERL_CONFIGURE=	YES

MAN3=		Text::Template.3 Text::Template::Preprocess.3

post-patch:
	@${FIND} ${WRKSRC} -name "*.orig" -delete

.include <bsd.port.mk>

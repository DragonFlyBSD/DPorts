# Created by: clsung@dragon2.net
# $FreeBSD: textproc/p5-RTF-Tokenizer/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	RTF-Tokenizer
PORTVERSION=	1.13
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for reading RTF files

USES=		perl5
USE_PERL5=	configure

MAN3=	RTF::Tokenizer.3

NO_STAGE=	yes
#post-patch:
#	@${FIND} ${WRKSRC} -name ._Tokenizer.pm -delete

.include <bsd.port.mk>

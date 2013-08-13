# Created by: clsung@dragon2.net
# $FreeBSD: textproc/p5-RTF-Parser/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	RTF-Parser
PORTVERSION=	1.09
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for parsing RTF files

BUILD_DEPENDS=	p5-RTF-Tokenizer>=0:${PORTSDIR}/textproc/p5-RTF-Tokenizer
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		RTF::HTML::Converter.3 \
		RTF::Control.3 \
		RTF::TEXT::Converter.3 \
		RTF::Parser.3

.include <bsd.port.mk>

# Created by: clsung@dragon2.net
# $FreeBSD: textproc/p5-RTF-Parser/Makefile 333056 2013-11-07 03:52:41Z vanilla $

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

.include <bsd.port.mk>

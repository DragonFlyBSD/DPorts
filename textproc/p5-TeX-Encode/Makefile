# New ports collection makefile for:	TeX-Encode
# Date created:				15 May2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-TeX-Encode/Makefile,v 1.18 2012/11/17 06:02:08 svnexp Exp $
#

PORTNAME=	TeX-Encode
PORTVERSION=	1.3
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:TIMBRODY
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Encode/decode Perl utf-8 strings into TeX

BUILD_DEPENDS=	p5-HTML-Parser>=3.35:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS=	p5-HTML-Parser>=3.35:${PORTSDIR}/www/p5-HTML-Parser
TEST_DEPENDS=	p5-Test-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Test-Pod-Coverage

PERL_CONFIGURE=	yes

MAN3=		TeX::Encode.3 TeX::Encode::BibTeX.3 TeX::Encode::charmap.3

.include <bsd.port.mk>

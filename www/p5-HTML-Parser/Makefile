# Created by: Vanilla I. Shu <vanilla@FreeBSD.org>
# $FreeBSD: www/p5-HTML-Parser/Makefile 318360 2013-05-17 08:09:57Z jadawin $

PORTNAME=	HTML-Parser
PORTVERSION=	3.71
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Perl5 module for parsing HTML documents

RUN_DEPENDS=	p5-HTML-Tagset>=3:${PORTSDIR}/www/p5-HTML-Tagset
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		HTML::Entities.3 \
		HTML::Filter.3 \
		HTML::HeadParser.3 \
		HTML::LinkExtor.3 \
		HTML::Parser.3 \
		HTML::PullParser.3 \
		HTML::TokeParser.3

.include <bsd.port.mk>

# $FreeBSD: ports/www/p5-HTML-Template-Pro/Makefile,v 1.1 2013/01/19 11:28:18 svnexp Exp $

PORTNAME=	HTML-Template-Pro
PORTVERSION=	0.9509
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to use HTML Templates from CGI scripts

RUN_DEPENDS=	\
	p5-JSON>=2:${PORTSDIR}/converters/p5-JSON
BUILD_DEPENDS=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	HTML::Template::PerlInterface.3 \
	HTML::Template::Pro.3 \
	HTML::Template::SYNTAX.3

.include <bsd.port.mk>

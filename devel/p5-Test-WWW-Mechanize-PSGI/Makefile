# $FreeBSD: devel/p5-Test-WWW-Mechanize-PSGI/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Test-WWW-Mechanize-PSGI
PORTVERSION=	0.35
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to test PSGI programs using WWW::Mechanize

RUN_DEPENDS=	\
	p5-Plack>0:${PORTSDIR}/www/p5-Plack \
	p5-Test-WWW-Mechanize>0:${PORTSDIR}/devel/p5-Test-WWW-Mechanize \
	p5-Try-Tiny>0:${PORTSDIR}/lang/p5-Try-Tiny
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Test::WWW::Mechanize::PSGI.3

NO_STAGE=	yes
.include <bsd.port.mk>

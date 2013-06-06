# $FreeBSD: www/p5-Apache-LogFormat-Compiler/Makefile 318772 2013-05-22 15:01:02Z kuriyama $

PORTNAME=	Apache-LogFormat-Compiler
PORTVERSION=	0.12
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to compile a log format string to perl-code

TEST_DEPENDS=	\
	p5-HTTP-Message>0:${PORTSDIR}/www/p5-HTTP-Message \
	p5-Try-Tiny>0:${PORTSDIR}/lang/p5-Try-Tiny

PERL_MODBUILD=	yes

MAN3=	Apache::LogFormat::Compiler.3

.include <bsd.port.mk>

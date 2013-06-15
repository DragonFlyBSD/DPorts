# Created by: dom@happygiraffe.net
# $FreeBSD: www/p5-ApacheBench/Makefile 320799 2013-06-13 13:08:41Z jadawin $

PORTNAME=	ApacheBench
PORTVERSION=	0.73
CATEGORIES=	www benchmarks perl5
MASTER_SITES=	CPAN/HTTPD
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for HTTP benchmarking

TEST_DEPENDS=	p5-Net-HTTP>=0:${PORTSDIR}/net/p5-Net-HTTP

MAKE_JOBS_SAFE=	yes
PERL_CONFIGURE=	yes

MAN3=		HTTPD::Bench::ApacheBench.3

.include <bsd.port.mk>

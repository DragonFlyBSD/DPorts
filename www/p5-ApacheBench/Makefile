# Created by: dom@happygiraffe.net
# $FreeBSD: www/p5-ApacheBench/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	ApacheBench
PORTVERSION=	0.73
CATEGORIES=	www benchmarks perl5
MASTER_SITES=	CPAN/HTTPD
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for HTTP benchmarking

TEST_DEPENDS=	p5-Net-HTTP>=0:${PORTSDIR}/net/p5-Net-HTTP

USES=		perl5
USE_PERL5=	configure

MAN3=		HTTPD::Bench::ApacheBench.3

.include <bsd.port.mk>

# Created by: dom@happygiraffe.net
# $FreeBSD: www/p5-ApacheBench/Makefile 327776 2013-09-20 23:36:50Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>

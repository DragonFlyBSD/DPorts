# Created by: dom@happygiraffe.net
# $FreeBSD: www/p5-ApacheBench/Makefile 332678 2013-11-04 09:57:54Z az $

PORTNAME=	ApacheBench
PORTVERSION=	0.73
CATEGORIES=	www benchmarks perl5
MASTER_SITES=	CPAN/HTTPD
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for HTTP benchmarking

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-Net-HTTP>=0:${PORTSDIR}/net/p5-Net-HTTP

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

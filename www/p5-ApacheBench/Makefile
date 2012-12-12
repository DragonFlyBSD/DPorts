# Ports collection Makefile for:		p5-ApacheBench
# Date created:					11 Jan 2002
# Whom:						dom@happygiraffe.net
#
# $FreeBSD: ports/www/p5-ApacheBench/Makefile,v 1.13 2012/11/17 06:02:44 svnexp Exp $
#

PORTNAME=	ApacheBench
PORTVERSION=	0.72
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

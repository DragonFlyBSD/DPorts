# Created by: Vick Khera <vivek@khera.org>
# $FreeBSD: finance/p5-Business-Stripe/Makefile 325960 2013-09-02 09:44:14Z az $

PORTNAME=	Business-Stripe
PORTVERSION=	0.04
CATEGORIES=	finance perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vivek@khera.org
COMMENT=	Perl5 module interface for the Stripe.com payment system

RUN_DEPENDS=	p5-HTTP-Message>=0.0:${PORTSDIR}/www/p5-HTTP-Message \
		p5-JSON>=0.0:${PORTSDIR}/converters/p5-JSON \
		p5-libwww>0.0:${PORTSDIR}/www/p5-libwww \
		p5-MIME-Base64>=0.0:${PORTSDIR}/converters/p5-MIME-Base64

WRKSRC=		${WRKDIR}/aquaron-Business-Stripe-c067843

USES=		perl5
USE_PERL5=	configure

MAN3=		Business::Stripe.3 Business::README.3

.include <bsd.port.mk>

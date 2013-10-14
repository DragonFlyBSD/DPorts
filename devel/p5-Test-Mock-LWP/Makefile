# Created by: TAKAHASHI Kaoru <kaoru@kaisei.org>
# $FreeBSD: devel/p5-Test-Mock-LWP/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Test-Mock-LWP
PORTVERSION=	0.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kaoru@kaisei.org
COMMENT=	Easy mocking of LWP packages

RUN_DEPENDS=	p5-Test-MockObject>=1.08:${PORTSDIR}/devel/p5-Test-MockObject

USES=		perl5
USE_PERL5=	configure

MAN3=		Test::Mock::HTTP::Request.3 \
		Test::Mock::HTTP::Response.3 \
		Test::Mock::LWP::UserAgent.3 \
		Test::Mock::LWP.3

NO_STAGE=	yes
.include <bsd.port.mk>

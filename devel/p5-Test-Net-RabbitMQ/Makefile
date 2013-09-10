# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: devel/p5-Test-Net-RabbitMQ/Makefile 326656 2013-09-07 16:51:08Z az $

PORTNAME=	Test-Net-RabbitMQ
PORTVERSION=	0.09
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:GPHAT
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	A Perl mock RabbitMQ implementation for use when testing

BUILD_DEPENDS=	p5-Moose>=0:${PORTSDIR}/devel/p5-Moose
RUN_DEPENDS:=	${BUILD_DEPENDS}

TEST_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

MAN3=		Test::Net::RabbitMQ.3

.include <bsd.port.mk>

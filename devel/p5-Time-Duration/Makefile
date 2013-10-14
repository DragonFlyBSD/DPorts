# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-Time-Duration/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Time-Duration
PORTVERSION=	1.1
PORTEPOCH=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Rounded or exact English expression of durations

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-Test-Pod>=0:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Test-Pod-Coverage

USES=		perl5
USE_PERL5=	configure

MAN3=		Time::Duration.3

NO_STAGE=	yes
.include <bsd.port.mk>

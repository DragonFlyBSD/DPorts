# $FreeBSD: devel/p5-Devel-BeginLift/Makefile 338908 2014-01-06 17:17:09Z az $

PORTNAME=	Devel-BeginLift
PORTVERSION=	0.001003
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to make selected sub calls evaluate at compile time

RUN_DEPENDS=	\
	p5-B-Hooks-OP-Check-EntersubForCV>=0.03:${PORTSDIR}/devel/p5-B-Hooks-OP-Check-EntersubForCV
BUILD_DEPENDS:=	${RUN_DEPENDS} \
	p5-ExtUtils-Depends>0:${PORTSDIR}/devel/p5-ExtUtils-Depends

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

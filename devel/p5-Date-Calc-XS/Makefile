# Created by: Denis Pokataev <catone@cpan.org>
# $FreeBSD: devel/p5-Date-Calc-XS/Makefile 341711 2014-01-29 10:57:06Z az $

PORTNAME=	Date-Calc-XS
PORTVERSION=	6.3
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	catone@cpan.org
COMMENT=	XS wrapper and C library plug-in for Date::Calc

BUILD_DEPENDS=	p5-Date-Calc>=6.2:${PORTSDIR}/devel/p5-Date-Calc \
		p5-Bit-Vector>=7.1:${PORTSDIR}/math/p5-Bit-Vector \
		p5-Carp-Clan>=5.3:${PORTSDIR}/devel/p5-Carp-Clan
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

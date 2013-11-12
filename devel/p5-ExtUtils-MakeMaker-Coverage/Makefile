# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-ExtUtils-MakeMaker-Coverage/Makefile 331936 2013-10-29 09:01:39Z vanilla $

PORTNAME=	ExtUtils-MakeMaker-Coverage
PORTVERSION=	0.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Add a Makefile target to determine test coverage using Devel::Cover

BUILD_DEPENDS=	p5-Devel-Cover>=0:${PORTSDIR}/devel/p5-Devel-Cover \
		p5-Object-Accessor>=0:${PORTSDIR}/devel/p5-Object-Accessor \
		p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: devel/p5-Class-Closure/Makefile 324276 2013-08-05 15:05:29Z az $

PORTNAME=	Class-Closure
PORTVERSION=	0.30
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Encapsulated, declarative classes in Perl

BUILD_DEPENDS=	p5-PadWalker>=0:${PORTSDIR}/devel/p5-PadWalker \
		p5-Devel-Caller>=0:${PORTSDIR}/devel/p5-Devel-Caller
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Class::Closure.3

.include <bsd.port.mk>

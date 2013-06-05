# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD: devel/p5-Class-Unload/Makefile 319178 2013-05-27 08:51:52Z tobez $

PORTNAME=	Class-Unload
PORTVERSION=	0.08
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module for unloading classes

BUILD_DEPENDS=	p5-Class-Inspector>=0:${PORTSDIR}/devel/p5-Class-Inspector
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	YES

MAN3=		Class::Unload.3

.include <bsd.port.mk>

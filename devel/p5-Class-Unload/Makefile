# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD: devel/p5-Class-Unload/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Class-Unload
PORTVERSION=	0.08
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module for unloading classes

BUILD_DEPENDS=	p5-Class-Inspector>=0:${PORTSDIR}/devel/p5-Class-Inspector
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Class::Unload.3

.include <bsd.port.mk>

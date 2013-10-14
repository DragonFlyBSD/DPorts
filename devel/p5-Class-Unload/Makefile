# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD: devel/p5-Class-Unload/Makefile 327724 2013-09-20 17:13:42Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>

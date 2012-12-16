# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD: ports/devel/p5-Class-Unload/Makefile,v 1.7 2012/11/17 05:56:08 svnexp Exp $

PORTNAME=	Class-Unload
PORTVERSION=	0.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl5 module for unloading classes

BUILD_DEPENDS=	p5-Class-Inspector>=0:${PORTSDIR}/devel/p5-Class-Inspector
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	YES

MAN3=		Class::Unload.3

.include <bsd.port.mk>

# $FreeBSD: net/p5-URI-Match/Makefile 338799 2014-01-05 16:55:04Z az $

PORTNAME=	URI-Match
PORTVERSION=	0.00001
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for matching URLs by parts

RUN_DEPENDS=	\
	p5-URI>0:${PORTSDIR}/net/p5-URI
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

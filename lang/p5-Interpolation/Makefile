# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: lang/p5-Interpolation/Makefile 332724 2013-11-04 14:20:04Z vanilla $

PORTNAME=	Interpolation
PORTVERSION=	0.74
CATEGORIES=	lang perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JENDA
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Implement arbitrary string interpolation semantics for Perl

BUILD_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

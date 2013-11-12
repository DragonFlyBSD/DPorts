# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: devel/p5-constant-lexical/Makefile 332365 2013-11-01 13:08:11Z vanilla $

PORTNAME=	constant-lexical
PORTVERSION=	2.0001
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SPROUT
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl pragma to declare lexical compile-time constants

BUILD_DEPENDS=	p5-Sub-Delete>=0:${PORTSDIR}/devel/p5-Sub-Delete \
		p5-Lexical-Var>=0:${PORTSDIR}/devel/p5-Lexical-Var
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

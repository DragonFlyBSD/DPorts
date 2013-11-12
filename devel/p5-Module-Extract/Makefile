# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD: devel/p5-Module-Extract/Makefile 332120 2013-10-30 14:44:54Z vanilla $

PORTNAME=	Module-Extract
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Base class for working with Perl distributions

BUILD_DEPENDS=	p5-Archive-Extract>=0:${PORTSDIR}/archivers/p5-Archive-Extract
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

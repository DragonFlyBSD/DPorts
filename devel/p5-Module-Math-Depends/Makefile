# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD: devel/p5-Module-Math-Depends/Makefile 332120 2013-10-30 14:44:54Z vanilla $

PORTNAME=	Module-Math-Depends
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Convenience object for manipulating module dependencies

BUILD_DEPENDS=	p5-Params-Util>=0:${PORTSDIR}/devel/p5-Params-Util \
		p5-version>=0:${PORTSDIR}/devel/p5-version
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

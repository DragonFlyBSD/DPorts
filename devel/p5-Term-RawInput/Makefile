# Created by: Frederic Culot <culot@FreeBSD.org>
# $FreeBSD: devel/p5-Term-RawInput/Makefile 338856 2014-01-06 11:00:15Z az $

PORTNAME=	Term-RawInput
PORTVERSION=	1.15
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:REEDFISH
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Drop-in replacement for <STDIN> with handling of non-standard keys

BUILD_DEPENDS=	p5-Term-ReadKey>=0:${PORTSDIR}/devel/p5-Term-ReadKey
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

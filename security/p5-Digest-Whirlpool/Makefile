# Created by: Gabor Kovesdan
# $FreeBSD: security/p5-Digest-Whirlpool/Makefile 342150 2014-02-01 14:41:23Z miwi $

PORTNAME=	Digest-Whirlpool
PORTVERSION=	1.09
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Perl extension for Whirlpool hash algorithm

BUILD_DEPENDS=	p5-MIME-Base64>=0:${PORTSDIR}/converters/p5-MIME-Base64
RUN_DEPENDS=	p5-MIME-Base64>=0:${PORTSDIR}/converters/p5-MIME-Base64

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

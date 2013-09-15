# Created by: Gabor Kovesdan
# $FreeBSD: security/p5-Digest-Whirlpool/Makefile 326999 2013-09-11 18:03:40Z az $

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

MAN1=	whirlpoolsum.1
MAN3=	Digest::Whirlpool.3

.include <bsd.port.mk>

# Ports collection Makefile for:	p5-Digest-Whirlpool
# Date created:				17 Dec 2005
# Whom:					Gabor Kovesdan
# $FreeBSD: ports/security/p5-Digest-Whirlpool/Makefile,v 1.12 2012/11/17 06:01:13 svnexp Exp $

PORTNAME=	Digest-Whirlpool
PORTVERSION=	1.09
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Perl extension for Whirlpool hash algorithm

BUILD_DEPENDS=	p5-MIME-Base64>=0:${PORTSDIR}/converters/p5-MIME-Base64
RUN_DEPENDS=	p5-MIME-Base64>=0:${PORTSDIR}/converters/p5-MIME-Base64

PERL_CONFIGURE=	yes

MAN1=	whirlpoolsum.1
MAN3=	Digest::Whirlpool.3

.include <bsd.port.mk>

# New ports collection makefile for:	p5-Crypt-Primes
# Date created:				Tue Sep 11 10:31:23 PDT 2001
# Whom:	      				Michael Haro <mharo@FreeBSD.org>
#
# $FreeBSD: ports/security/p5-Crypt-Primes/Makefile,v 1.10 2012/11/17 06:01:11 svnexp Exp $
#

PORTNAME=	Crypt-Primes
PORTVERSION=	0.50
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Provable Prime Number Generator suitable for Cryptographic Applications

BUILD_DEPENDS=	p5-Crypt-Random>=0:${PORTSDIR}/security/p5-Crypt-Random \
		p5-Math-Pari>=0:${PORTSDIR}/math/p5-Math-Pari

PERL_CONFIGURE=	yes

MAN1=		largeprimes.1
MAN3=		Crypt::Primes.3

.include <bsd.port.mk>

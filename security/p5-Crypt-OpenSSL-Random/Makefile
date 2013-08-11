# Created by: nork@cityfujisawa.ne.jp
# $FreeBSD: security/p5-Crypt-OpenSSL-Random/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Crypt-OpenSSL-Random
PORTVERSION=	0.04
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to the OpenSSL pseudo-random number generator

USES=		perl5
USE_PERL5=	configure
USE_OPENSSL=	yes
MAKE_ARGS+=	PASTHRU_INC=-I${OPENSSLINC}

MAN3=		Crypt::OpenSSL::Random.3

.include <bsd.port.mk>

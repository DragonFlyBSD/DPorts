# Created by: erwin@FreeBSD.org
# $FreeBSD: security/p5-Crypt-OpenSSL-Bignum/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Crypt-OpenSSL-Bignum
PORTVERSION=	0.04
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	OpenSSL's multiprecision integer arithmetic

USES=		perl5
USE_PERL5=	configure
USE_OPENSSL=	yes
MAKE_ARGS+=	PASTHRU_INC=-I${OPENSSLINC}

MAN3=		Crypt::OpenSSL::Bignum::CTX.3 Crypt::OpenSSL::Bignum.3

.include <bsd.port.mk>

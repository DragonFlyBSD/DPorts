# Created by: Lars Thegler <lars@thegler.dk>
# $FreeBSD: mail/p5-Email-MIME-Encodings/Makefile 319462 2013-05-31 01:46:28Z miwi $

PORTNAME=	Email-MIME-Encodings
PORTVERSION=	1.313
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	A unified interface to MIME encoding and decoding

RUN_DEPENDS=	p5-MIME-Base64>3.05:${PORTSDIR}/converters/p5-MIME-Base64
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Email::MIME::Encodings.3

.include <bsd.port.mk>

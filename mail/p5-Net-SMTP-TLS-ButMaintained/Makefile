# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: mail/p5-Net-SMTP-TLS-ButMaintained/Makefile 318633 2013-05-20 23:26:09Z kuriyama $

PORTNAME=	Net-SMTP-TLS-ButMaintained
PORTVERSION=	0.24
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	SMTP client supporting TLS and AUTH

RUN_DEPENDS=	p5-Digest-HMAC>=0:${PORTSDIR}/security/p5-Digest-HMAC \
		p5-IO-Socket-SSL>=0:${PORTSDIR}/security/p5-IO-Socket-SSL \
		p5-Net-SSLeay>=0:${PORTSDIR}/security/p5-Net-SSLeay
TEST_DEPENDS=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Net::SMTP::TLS::ButMaintained.3

.include <bsd.port.mk>

# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: mail/p5-Email-Address/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Email-Address
PORTVERSION=	1.89.8
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RJBS
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	RFC 2822 Address Parsing and Creation

TEST_DEPENDS=	p5-Test-Simple>=0.96:${PORTSDIR}/devel/p5-Test-Simple

USES=		perl5
USE_PERL5=	configure

MAN3=		Email::Address.3

.include <bsd.port.mk>

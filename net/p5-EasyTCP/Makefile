# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: net/p5-EasyTCP/Makefile 318283 2013-05-16 08:38:49Z miwi $

PORTNAME=	EasyTCP
PORTVERSION=	0.26
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MNAGUIB
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Easily create TCP/IP clients and servers

BUILD_DEPENDS=	p5-Crypt-RSA>=0:${PORTSDIR}/security/p5-Crypt-RSA
RUN_DEPENDS=	p5-Crypt-RSA>=0:${PORTSDIR}/security/p5-Crypt-RSA

PERL_CONFIGURE=	yes

MAN3=		Net::EasyTCP.3

.include <bsd.port.mk>

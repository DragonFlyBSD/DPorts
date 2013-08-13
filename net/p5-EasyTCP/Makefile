# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: net/p5-EasyTCP/Makefile 324174 2013-08-02 18:52:07Z mat $

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

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::EasyTCP.3

.include <bsd.port.mk>

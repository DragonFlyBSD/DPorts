# Created by: Henk van Oers <hvo.pm@xs4all.nl>
# $FreeBSD: net/p5-Net-Subnet/Makefile 332868 2013-11-05 16:42:55Z vanilla $

PORTNAME=	Net-Subnet
PORTVERSION=	1.03
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Fast IP-in-subnet matcher for IPv4 and IPv6, CIDR or mask

LICENSE=	ART10

BUILD_DEPENDS=	p5-Socket6>=0.23:${PORTSDIR}/net/p5-Socket6
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

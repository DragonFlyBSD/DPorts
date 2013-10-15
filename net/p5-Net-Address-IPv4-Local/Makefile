# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: net/p5-Net-Address-IPv4-Local/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Net-Address-IPv4-Local
PORTVERSION=	0.12
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A class for discovering the local system's IP address

BUILD_DEPENDS=	p5-Error>=0:${PORTSDIR}/lang/p5-Error
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Net::Address::IPv4::Local.3

USES=		perl5
USE_PERL5=	modbuild

NO_STAGE=	yes
.include <bsd.port.mk>

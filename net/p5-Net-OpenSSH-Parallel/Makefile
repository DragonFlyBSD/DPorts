# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: net/p5-Net-OpenSSH-Parallel/Makefile 325163 2013-08-21 17:42:57Z sunpoet $

PORTNAME=	Net-OpenSSH-Parallel
PORTVERSION=	0.12
CATEGORIES=	net security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Run SSH jobs in parallel

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Net-OpenSSH>=0.39:${PORTSDIR}/net/p5-Net-OpenSSH
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	configure
USES=		perl5

MAN3=		Net::OpenSSH::Parallel.3 \
		Net::OpenSSH::Parallel::Constants.3

.include <bsd.port.mk>

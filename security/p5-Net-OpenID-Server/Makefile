# Created by: Alex Kapranoff <kappa@rambler-co.ru>
# $FreeBSD: security/p5-Net-OpenID-Server/Makefile 333829 2013-11-15 09:49:55Z sunpoet $

PORTNAME=	Net-OpenID-Server
PORTVERSION=	1.09
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Reference implementation of OpenID server

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Net-OpenID-Common>=1.11:${PORTSDIR}/security/p5-Net-OpenID-Common \
		p5-URI>=0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

INSTALL_TARGET=	pure_install
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

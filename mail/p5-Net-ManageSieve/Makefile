# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: mail/p5-Net-ManageSieve/Makefile 327742 2013-09-20 19:59:12Z bapt $

PORTNAME=	Net-ManageSieve
PORTVERSION=	0.12
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	ManageSieve Protocol Client

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Authen-SASL>=0:${PORTSDIR}/security/p5-Authen-SASL
RUN_DEPENDS=	p5-Authen-SASL>=0:${PORTSDIR}/security/p5-Authen-SASL

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::ManageSieve.3

NO_STAGE=	yes
.include <bsd.port.mk>

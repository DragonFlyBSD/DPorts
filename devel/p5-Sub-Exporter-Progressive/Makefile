# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: devel/p5-Sub-Exporter-Progressive/Makefile 328865 2013-09-30 20:25:25Z sunpoet $

PORTNAME=	Sub-Exporter-Progressive
PORTVERSION=	0.001.010
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Only use Sub::Exporter if you need it

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Sub-Exporter>=0:${PORTSDIR}/devel/p5-Sub-Exporter
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>

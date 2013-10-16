# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: devel/p5-File-HomeDir-PathClass/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	File-HomeDir-PathClass
PORTVERSION=	1.112.060
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	File::HomeDir returning Path::Class objects

BUILD_DEPENDS=	p5-File-HomeDir>=0.93:${PORTSDIR}/devel/p5-File-HomeDir \
		p5-Path-Class>=0:${PORTSDIR}/devel/p5-Path-Class \
		p5-Sub-Exporter>=0:${PORTSDIR}/devel/p5-Sub-Exporter
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	modbuild
USES=		perl5

MAN3=		File::HomeDir::PathClass.3

NO_STAGE=	yes
.include <bsd.port.mk>

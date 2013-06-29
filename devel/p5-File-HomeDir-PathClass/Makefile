# New ports collection makefile for:	p5-File-HomeDir-PathClass
# Date created:		2011-10-10
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: devel/p5-File-HomeDir-PathClass/Makefile 321187 2013-06-18 13:49:02Z az $
#

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
RUN_DEPENDS=	p5-File-HomeDir>=0.93:${PORTSDIR}/devel/p5-File-HomeDir \
		p5-Path-Class>=0:${PORTSDIR}/devel/p5-Path-Class \
		p5-Sub-Exporter>=0:${PORTSDIR}/devel/p5-Sub-Exporter

PERL_MODBUILD=	yes

MAN3=		File::HomeDir::PathClass.3

.include <bsd.port.mk>

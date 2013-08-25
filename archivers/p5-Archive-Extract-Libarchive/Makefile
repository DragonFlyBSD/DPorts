# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: archivers/p5-Archive-Extract-Libarchive/Makefile 325148 2013-08-21 14:55:43Z sunpoet $

PORTNAME=	Archive-Extract-Libarchive
PORTVERSION=	0.38
PORTREVISION=	1
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Generic archive extracting mechanism (using libarchive)

BUILD_DEPENDS=	p5-Object-Tiny>=0:${PORTSDIR}/devel/p5-Object-Tiny
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-File-Slurp>=0:${PORTSDIR}/devel/p5-File-Slurp \
		p5-Path-Class>=0:${PORTSDIR}/devel/p5-Path-Class \
		p5-Test-Pod>=1.04:${PORTSDIR}/devel/p5-Test-Pod

USE_PERL5=	modbuild
USES=		perl5

MAN3=		Archive::Extract::Libarchive.3

.include <bsd.port.mk>

# Created by: lth@FreeBSD.org
# $FreeBSD: devel/p5-Test-Script/Makefile 341711 2014-01-29 10:57:06Z az $

PORTNAME=	Test-Script
PORTVERSION=	1.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Test
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Test::Script - Cross-platform basic tests for scripts

RUN_DEPENDS=	p5-IPC-Run3>=0.034:${PORTSDIR}/devel/p5-IPC-Run3 \
		p5-Probe-Perl>=0.01:${PORTSDIR}/sysutils/p5-Probe-Perl
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
